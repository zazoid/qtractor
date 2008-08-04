// qtractorAudioPeak.h
//
/****************************************************************************
   Copyright (C) 2005-2008, rncbc aka Rui Nuno Capela. All rights reserved.

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public License
   as published by the Free Software Foundation; either version 2
   of the License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License along
   with this program; if not, write to the Free Software Foundation, Inc.,
   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

*****************************************************************************/

#ifndef __qtractorAudioPeak_h
#define __qtractorAudioPeak_h

#include <QString>
#include <QEvent>
#include <QFile>
#include <QHash>

#include <QMutex>

// Forward declarations.
class qtractorAudioPeakThread;
class qtractorAudioPeakFactory;


//----------------------------------------------------------------------
// class qtractorAudioPeakFile -- Audio peak file (ref'counted)
//

class qtractorAudioPeakFile
{
public:

	// Constructor.
	qtractorAudioPeakFile(qtractorAudioPeakFactory *pFactory,
		const QString& sFilename, float fTimeStretch);

	// Default destructor.
	~qtractorAudioPeakFile();

	// Audio properties accessors.
	const QString& filename() const;
	float timeStretch() const;

	// Peak cache properties accessors.
	QString name() const;
	unsigned short period();
	unsigned short channels();

	// Audio peak file header.
	struct Header
	{
		unsigned short period;
		unsigned short channels;
	};

	// Audio peak file frame record.
	struct Frame
	{
		unsigned char max;
		unsigned char rms;
	};

	// Peak cache file methods.
	bool openRead();
	void read(Frame *pPeakFrames,
		unsigned long iPeakOffset, unsigned int iPeakFrames);
	void closeRead();

	// Write peak from audio frame methods.
	bool openWrite(unsigned short iChannels, unsigned int iSampleRate);
	void write(float **ppAudioFrames, unsigned int iAudioFrames);
	void closeWrite();

	// Event notifier widget settings.
	QWidget     *notifyWidget() const;
	QEvent::Type notifyPeakType() const;

	// Auto-delete property.
	bool isAutoRemove() const;

	// Reference count methods.
	void addRef();
	void removeRef();

protected:

	// Internal creational methods.
	void writeFrame();

private:

	// Reference to master peak manager.
	qtractorAudioPeakFactory *m_pFactory;

	// Instance variables.
	QString        m_sFilename;
	float          m_fTimeStretch;

	QFile          m_peakFile;

	enum { None = 0, Read = 1, Write = 2 } m_openMode;

	Header         m_peakHeader;

	unsigned long  m_iReadOffset;
	unsigned long  m_iWriteOffset;

	float         *m_peakMax;
	float         *m_peakRms;
	unsigned short m_iPeakPeriod;
	unsigned short m_iPeak;

	// The peak file creation detached thread.
	qtractorAudioPeakThread *m_pPeakThread;

	// Current reference count.
	unsigned int m_iRefCount;
};


//----------------------------------------------------------------------
// class qtractorAudioPeak -- Audio Peak file pseudo-cache.
//

class qtractorAudioPeak
{
public:

	// Constructor.
	qtractorAudioPeak(qtractorAudioPeakFile *pPeakFile);
	// Copy consructor.
	qtractorAudioPeak(const qtractorAudioPeak& peak);
	// Default destructor.
	~qtractorAudioPeak();

	// Peak file accessors.
	const QString& filename() const;

	// Peak cache properties.
	unsigned short period() const;
	unsigned short channels() const;

	// Peak cache file methods.
	bool openRead();
	void read(qtractorAudioPeakFile::Frame *pPeakFrames,
		unsigned long iPeakOffset, unsigned int iPeakFrames);
	void closeRead();

	// Write peak from audio frame methods.
	bool openWrite(unsigned short iChannels, unsigned int iSampleRate);
	void write(float **ppAudioFrames, unsigned int iAudioFrames);
	void closeWrite();

private:

	// Instance variable (ref'counted).
	qtractorAudioPeakFile *m_pPeakFile;
};


//----------------------------------------------------------------------
// class qtractorAudioPeakFactory -- Audio peak file factory (singleton).
//

class qtractorAudioPeakFactory
{
public:

	// Constructor.
	qtractorAudioPeakFactory();
	// Default destructor.
	~qtractorAudioPeakFactory();

	// The peak file factory-method.
	qtractorAudioPeak *createPeak(const QString& sFilename, float fTimeStretch);
	void removePeak(qtractorAudioPeakFile *pPeakFile);

	// Event notifier widget settings.
	void setNotifyWidget   (QWidget *pNotifyWidget);
	void setNotifyPeakType (QEvent::Type eNotifyPeakType);

	QWidget     *notifyWidget() const;
	QEvent::Type notifyPeakType() const;

	// Auto-delete property.
	void setAutoRemove(bool bAutoRemove);
	bool isAutoRemove() const;

private:

	// Factory mutex.
	QMutex m_mutex;

	// The list of managed peak files.
	QHash<QString, qtractorAudioPeakFile *> m_peaks;

	// The event notifier widget.
	QWidget      *m_pNotifyWidget;
	QEvent::Type  m_eNotifyPeakType;

	// Auto-delete property.
	bool m_bAutoRemove;
};


#endif  // __qtractorAudioPeak_h


// end of qtractorAudioPeak.h
