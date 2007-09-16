// qtractorMidiEditor.h
//
/****************************************************************************
   Copyright (C) 2005-2007, rncbc aka Rui Nuno Capela. All rights reserved.

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

#ifndef __qtractorMidiEditor_h
#define __qtractorMidiEditor_h

#include "qtractorMidiCursor.h"
#include "qtractorMidiEditSelect.h"

#include "qtractorMidiEvent.h"

#include <QSplitter>


// Forward declarations.
class qtractorScrollView;
class qtractorRubberBand;

class qtractorCommandList;

class qtractorMidiEditList;
class qtractorMidiEditTime;
class qtractorMidiEditView;
class qtractorMidiEditEventScale;
class qtractorMidiEditEvent;

class qtractorMidiEditCommand;
class qtractorMidiClip;

class qtractorTimeScale;

class QFrame;
class QComboBox;
class QCloseEvent;
class QCursor;


//----------------------------------------------------------------------------
// qtractorMidiEditor -- The main session track listview widget.

class qtractorMidiEditor : public QSplitter
{
	Q_OBJECT

public:

	// Constructor.
	qtractorMidiEditor(QWidget *pParent);
	// Destructor.
	~qtractorMidiEditor();

	// MIDI clip sequence accessors.
	void setMidiClip(qtractorMidiClip *pMidiClip);
	qtractorMidiClip *midiClip() const;

	// MIDI clip properties accessors.
	const QString& filename() const;
	unsigned short trackChannel() const;
	unsigned short format() const;

	qtractorMidiSequence *sequence() const;

	// Event foreground (outline) color.
	void setForeground(const QColor& fore);
	const QColor& foreground() const;

	// Event background (fill) color.
	void setBackground(const QColor& back);
	const QColor& background() const;

	// Edit (creational) mode.
	void setEditMode(bool bEditMode);
	bool isEditMode() const;

	// Local time scale accessors.
	qtractorTimeScale *timeScale() const;

	// Time-scale offset (in frames) accessors.
	void setOffset(unsigned long iOffset);
	unsigned long offset() const;

	// Time-scale length (in frames) accessors.
	void setLength(unsigned long iLength);
	unsigned long length() const;

	// Child widgets accessors.
	QFrame *editListHeader() const;
	qtractorMidiEditList *editList() const;
	qtractorMidiEditTime *editTime() const;
	qtractorMidiEditView *editView() const;
	qtractorMidiEditEventScale *editEventScale() const;
	qtractorMidiEditEvent *editEvent() const;
	QFrame *editEventFrame() const;

	// Edit-head/tail accessors.
	void setEditHead(unsigned long iEditHead, bool bSync = true);
	unsigned long editHead() const;
	int editHeadX() const;

	void setEditTail(unsigned long iEditTail, bool bSync = true);
	unsigned long editTail() const;
	int editTailX() const;

	// Play-head positioning.
	void setPlayHead(unsigned long iPlayHead, bool bSyncView = true);
	unsigned long playHead() const;
	int playHeadX() const;

	// Play-head follow-ness.
	void setSyncView(bool bSyncView);
	bool isSyncView() const;

	// Note autition while editing.
	void setSendNotes(bool bSendNotes);
	bool isSendNotes() const;

	// Note event value vs. duration display.
	void setNoteDuration(bool bNoteDuration);
	bool isNoteDuration() const;

	// Note event coloring.
	void setNoteColor(bool bNoteColor);
	bool isNoteColor() const;

	// Note event coloring.
	void setValueColor(bool bValueColor);
	bool isValueColor() const;

	// Alterrnate command action update helper...
	void updateUndoAction(QAction *pAction) const;
	void updateRedoAction(QAction *pAction) const;

	// Command predicate status.
	bool canUndo() const;
	bool canRedo() const;

	// Undo/redo last edit command.
	void undoCommand();
	void redoCommand();

	// Whether there's any items currently selected.
	bool isSelected() const;

	// Whether there's any items on the clipboard.
	static bool isClipboard();

	// Clipboard commands.
	void cutClipboard();
	void copyClipboard();
	void pasteClipboard();

	// Execute event removal.
	void deleteSelect();

	// Select all/none contents.
	void selectAll(bool bSelect = true, bool bToggle = false);

	// Select everything between a given view rectangle.
	void selectRect(const QRect& rect, bool bToggle = false,
		bool bCommit = false);

	// Update/sync integral contents.
	void updateContents();
	
	// Try to center vertically the edit-view...
	void centerContents();

	// To optimize and keep track of current (re)draw
	// position, mostly like an sequence cursor/iterator.
	qtractorMidiEvent *seekEvent(unsigned long iTime);

	// Get event from given contents position.
	qtractorMidiEvent *eventAt(qtractorScrollView *pScrollView,
		const QPoint& pos, QRect *pRect = NULL);

	// Start immediate some drag-edit mode...
	qtractorMidiEvent *dragEditEvent(qtractorScrollView *pScrollView,
		const QPoint& pos, Qt::KeyboardModifiers modifiers);
	
	// Track drag-move-select cursor and mode...
	qtractorMidiEvent *dragMoveEvent (qtractorScrollView *pScrollView,
		const QPoint& pos, Qt::KeyboardModifiers modifiers);

	// Start drag-move-selecting...
	void dragMoveStart(qtractorScrollView *pScrollView,
		const QPoint& pos, Qt::KeyboardModifiers modifiers);

	// Update drag-move-selection...
	void dragMoveUpdate(qtractorScrollView *pScrollView,
		const QPoint& pos, Qt::KeyboardModifiers modifiers);

	// Commit drag-move-selection...
	void dragMoveCommit(qtractorScrollView *pScrollView,
		const QPoint& pos, Qt::KeyboardModifiers modifiers);

	// Trap for help/tool-tip and leave events.
	bool dragMoveFilter(qtractorScrollView *pScrollView,
		QObject *pObject, QEvent *pEvent);

	// MIDI event tool tip helper.
	QString eventToolTip(qtractorMidiEvent *pEvent) const;

	// Visualize the event selection drag-move.
	void paintDragState(qtractorScrollView *pScrollView,
		QPainter *pPainter);

	// Reset drag/select/move state.
	void resetDragState(qtractorScrollView *pScrollView);

	// Adjust edit-command result to prevent event overlapping.
	bool adjustEditCommand(qtractorMidiEditCommand *pEditCommand);

	// Tool indexes.
	enum {
		Quantize  = 0,
		Transpose = 1,
		Normalize = 2,
		Randomize = 3,
		Resize    = 4
	};

	// Edit tools form page selector.
	void executeTool(int iToolIndex);

	// Command list accessor.
	qtractorCommandList *commands() const;

	// Note map accessor.
	static const QString noteName(unsigned char note);

	// Controller hash map accessor.
	static const QString& controllerName(unsigned char controller);

	// All-in-one SMF file writer/creator method.
	static bool saveCopyFile(const QString& sNewFilename,
		const QString& sOldFilename, unsigned short iTrackChannel,
		qtractorMidiSequence *pSeq, qtractorTimeScale *pTimeScale = NULL);

	// Create filename revision.
	static QString createFilePathRevision(
		const QString& sFilename, int iRevision = 0);

public slots:

	// Redirect selection/change notification.
	void selectionChangeNotify();
	void contentsChangeNotify();

	// Redirect note on/off;
	void sendNote(int iNote, int iVelocity = 0);

protected:

	// Zoom factor constants.
	enum { ZoomMin = 10, ZoomBase = 100, ZoomMax = 1000, ZoomStep = 10 };

	// Common zoom factor settlers.
	void horizontalZoomStep(int iZoomStep);
	void verticalZoomStep(int iZoomStep);

	// Close event override to save some geometry settings.
	virtual void closeEvent(QCloseEvent *pCloseEvent);

	// Selection flags
	enum { 
		SelectNone   = 0,
		SelectClear  = 1,
		SelectToggle = 2,
		SelectCommit = 4
	};

	// Update the event selection list.
	void updateDragSelect(qtractorScrollView *pScrollView,
		const QRect& rectSelect, int flags);

	// Drag-move current selection.
	void updateDragMove(qtractorScrollView *pScrollView, const QPoint& pos);
	// Finalize the event drag-move.
	void executeDragMove(qtractorScrollView *pScrollView, const QPoint& pos);

	// Drag-resize current selection (also editing).
	void updateDragResize(qtractorScrollView *pScrollView, const QPoint& pos);
	// Finalize the event drag-resize (also editing).
	void executeDragResize(qtractorScrollView *pScrollView, const QPoint& pos);

	// Finalize the event drag-paste.
	void executeDragPaste(qtractorScrollView *pScrollView, const QPoint& pos);

	// Vertical line position drawing.
	void drawPositionX(int& iPositionX, int x, bool bSyncView);

protected slots:

	// Horizontal zoom view slots.
	void horizontalZoomInSlot();
	void horizontalZoomOutSlot();
	void horizontalZoomResetSlot();

	// Vertical zoom view slots.
	void verticalZoomInSlot();
	void verticalZoomOutSlot();
	void verticalZoomResetSlot();

	// Command execution notification slot.
	void updateNotifySlot(bool bRefresh);

signals:

	// Emitted on late close.
	void closeNotifySignal();

	// Emitted on selection/changes.
	void selectNotifySignal(qtractorMidiEditor *);
	void changeNotifySignal(qtractorMidiEditor *);

	// Send note event signale.
	void sendNoteSignal(int, int);

private:

	// The editing sequence.
	qtractorMidiClip *m_pMidiClip;

	// Event fore/background colors.
	QColor m_foreground;
	QColor m_background;

	// The main child widgets.
	QFrame *m_pEditListHeader;
	qtractorMidiEditList *m_pEditList;
	qtractorMidiEditTime *m_pEditTime;
	qtractorMidiEditView *m_pEditView;
	qtractorMidiEditEventScale *m_pEditEventScale;
	qtractorMidiEditEvent *m_pEditEvent;
	QFrame *m_pEditEventFrame;

	// The local time scale.
	qtractorTimeScale *m_pTimeScale;

	// The local time-scale offset/length.
	unsigned long m_iOffset;
	unsigned long m_iLength;

	// Event cursors (main time-line).
	qtractorMidiCursor m_cursor;
	qtractorMidiCursor m_cursorAt;

	// The current selection list.
	qtractorMidiEditSelect m_select;

	// Common drag state.
	enum DragState { 
		DragNone = 0, DragStart, DragSelect,
		DragMove, DragResize, DragPaste
	} m_dragState;

	// Common drag-resize mode.
	enum ResizeMode { 
		ResizeNone = 0, ResizeNoteRight, ResizeNoteLeft,
		ResizeValueTop, ResizePitchBendTop, ResizePitchBendBottom
	} m_resizeMode;

	// The current selecting/dragging stuff.
	qtractorMidiEvent *m_pEventDrag;
	QPoint m_posDrag;
	QRect  m_rectDrag;

	// Differential drag-move position.
	QPoint m_posDelta;

	// Viewport rubber-banding stuff.
	qtractorRubberBand *m_pRubberBand;

	// Edit mode flag.
	bool m_bEditMode;
	bool m_bEventDragEdit;

	// Last useful editing values.
	struct {
		unsigned char  note;
		unsigned char  value;
		unsigned long  duration;
		unsigned short pitchBend;
	} m_last;

	// The local edit command list/queue.
	qtractorCommandList *m_pCommands;

	// Local edit-head/tail positioning.
	unsigned long m_iEditHead;
	int           m_iEditHeadX;
	unsigned long m_iEditTail;
	int           m_iEditTailX;

	// Local playhead positioning.
	unsigned long m_iPlayHead;
	int           m_iPlayHeadX;
	bool          m_bSyncView;

	// Note autition while editing.
	bool m_bSendNotes;
	
	// Event value stick vs. duration rectangle.
	bool m_bNoteDuration;

	// Event (note, velocity) coloring.
	bool m_bNoteColor;
	bool m_bValueColor;

	// Old-fashion singleton edit-mode cursors. 
	static int      g_iCursorRefCount;
	static QCursor *g_pCursorEditModeOn;
	static QCursor *g_pCursorEditPaste;

	// The local clipboard stuff (singleton).
	static struct ClipBoard
	{
		// Constructor.
		ClipBoard() {}
		// Destructor.
		~ClipBoard() { clear(); }
		// Clipboard clear.
		void clear() { qDeleteAll(items); items.clear(); }
		// Clipboard members.
		QList<qtractorMidiEvent *> items;

		// Singleton declaration.
	}	g_clipboard;
};


#endif  // __qtractorMidiEditor_h


// end of qtractorMidiEditor.h
