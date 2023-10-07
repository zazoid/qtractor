/*
qtractor - An Audio/MIDI multi-track sequencer.

   Copyright (C) 2005-2023, rncbc aka Rui Nuno Capela. All rights reserved.

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

 
*/

/********************************************************************************
** Form generated from reading UI file 'qtractorOptionsForm.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTRACTOROPTIONSFORM_H
#define UI_QTRACTOROPTIONSFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qtractorComboBox.h"
#include "qtractorSpinBox.h"

QT_BEGIN_NAMESPACE

class Ui_qtractorOptionsForm
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *OptionsTabWidget;
    QWidget *GeneralTabPage;
    QVBoxLayout *vboxLayout1;
    QGroupBox *GeneralSessionGroupBox;
    QGridLayout *gridLayout;
    QLabel *SessionFormatTextLabel;
    QComboBox *SessionFormatComboBox;
    QSpacerItem *spacerItem;
    QCheckBox *SessionTemplateCheckBox;
    QComboBox *SessionTemplatePathComboBox;
    QToolButton *SessionTemplatePathToolButton;
    QSpacerItem *spacerItem1;
    QCheckBox *SessionBackupCheckBox;
    QComboBox *SessionBackupModeComboBox;
    QCheckBox *SessionAutoSaveCheckBox;
    QSpinBox *SessionAutoSaveSpinBox;
    QGroupBox *GeneralOptionsGroupBox;
    QGridLayout *gridLayout1;
    QCheckBox *ConfirmRemoveCheckBox;
    QCheckBox *ConfirmArchiveCheckBox;
    QLabel *MaxRecentFilesTextLabel;
    QSpinBox *MaxRecentFilesSpinBox;
    QCheckBox *StdoutCaptureCheckBox;
    QCheckBox *CompletePathCheckBox;
    QCheckBox *PeakAutoRemoveCheckBox;
    QCheckBox *KeepToolsOnTopCheckBox;
    QCheckBox *TrackViewDropSpanCheckBox;
    QCheckBox *ShiftKeyModifierCheckBox;
    QCheckBox *MidButtonModifierCheckBox;
    QCheckBox *KeepEditorsOnTopCheckBox;
    QSpacerItem *spacerItem2;
    QGroupBox *GeneralTransportGroupBox;
    QGridLayout *gridLayout2;
    QLabel *TransportModeTextLabel;
    QComboBox *TransportModeComboBox;
    QCheckBox *TimebaseCheckBox;
    QSpacerItem *spacerItem3;
    QLabel *LoopRecordingModeTextLabel;
    QComboBox *LoopRecordingModeComboBox;
    QWidget *AudioTabPage;
    QVBoxLayout *vboxLayout2;
    QGroupBox *AudioCaptureGroupBox;
    QGridLayout *gridLayout3;
    QLabel *AudioCaptureTypeTextLabel;
    qtractorAudioFileTypeComboBox *AudioCaptureTypeComboBox;
    QSpacerItem *spacerItem4;
    QLabel *AudioCaptureFormatTextLabel;
    qtractorAudioFileFormatComboBox *AudioCaptureFormatComboBox;
    QLabel *AudioCaptureQualityTextLabel;
    QSpinBox *AudioCaptureQualitySpinBox;
    QGroupBox *AudioPlaybackGroupBox;
    QGridLayout *gridLayout4;
    QCheckBox *AudioAutoTimeStretchCheckBox;
    QSpacerItem *spacerItem5;
    QLabel *AudioResampleTypeTextLabel;
    QComboBox *AudioResampleTypeComboBox;
    QCheckBox *AudioWsolaTimeStretchCheckBox;
    QCheckBox *AudioWsolaQuickSeekCheckBox;
    QCheckBox *AudioPlayerBusCheckBox;
    QCheckBox *AudioPlayerAutoConnectCheckBox;
    QSpacerItem *spacerItem6;
    QSpacerItem *spacerItem7;
    QGroupBox *AudioMetronomeGroupBox;
    QGridLayout *gridLayout5;
    QCheckBox *AudioMetronomeCheckBox;
    QLabel *AudioCountInModeLabel;
    QComboBox *AudioCountInModeComboBox;
    QSpinBox *AudioCountInBeatsSpinBox;
    QLabel *MetroBarFilenameTextLabel;
    QComboBox *MetroBarFilenameComboBox;
    QToolButton *MetroBarFilenameToolButton;
    QLabel *MetroBarGainTextLabel;
    QDoubleSpinBox *MetroBarGainSpinBox;
    QLabel *MetroBeatFilenameTextLabel;
    QComboBox *MetroBeatFilenameComboBox;
    QToolButton *MetroBeatFilenameToolButton;
    QLabel *MetroBeatGainTextLabel;
    QDoubleSpinBox *MetroBeatGainSpinBox;
    QCheckBox *AudioMetroBusCheckBox;
    QCheckBox *AudioMetroAutoConnectCheckBox;
    QLabel *AudioMetroOffsetTextLabel;
    qtractorTimeSpinBox *AudioMetroOffsetSpinBox;
    QWidget *MidiTabPage;
    QVBoxLayout *vboxLayout3;
    QGroupBox *MidiCaptureGroupBox;
    QGridLayout *gridLayout6;
    QLabel *MidiCaptureFormatTextLabel;
    qtractorMidiFileFormatComboBox *MidiCaptureFormatComboBox;
    QSpacerItem *spacerItem8;
    QLabel *MidiCaptureQuantizeTextLabel;
    QComboBox *MidiCaptureQuantizeComboBox;
    QGroupBox *MidiPlaybackGroupBox;
    QGridLayout *gridLayout7;
    QLabel *MidiQueueTimerTextLabel;
    QComboBox *MidiQueueTimerComboBox;
    QSpacerItem *spacerItem9;
    QCheckBox *MidiDriftCorrectCheckBox;
    QCheckBox *MidiPlayerBusCheckBox;
    QCheckBox *MidiResetAllControllersCheckBox;
    QGroupBox *MidiControlGroupBox;
    QGridLayout *gridLayout8;
    QLabel *MidiMmcModeTextLabel;
    QComboBox *MidiMmcModeComboBox;
    QLabel *MidiMmcDeviceTextLabel;
    QComboBox *MidiMmcDeviceComboBox;
    QSpacerItem *spacerItem10;
    QLabel *MidiSppModeTextLabel;
    QComboBox *MidiSppModeComboBox;
    QSpacerItem *spacerItem11;
    QLabel *MidiClockModeTextLabel;
    QComboBox *MidiClockModeComboBox;
    QCheckBox *MidiControlBusCheckBox;
    QSpacerItem *spacerItem12;
    QGroupBox *MidiMetronomeGroupBox;
    QGridLayout *gridLayout9;
    QCheckBox *MidiMetronomeCheckBox;
    QLabel *MidiCountInModeLabel;
    QComboBox *MidiCountInModeComboBox;
    QSpinBox *MidiCountInBeatsSpinBox;
    QLabel *MetroChannelTextLabel;
    QSpinBox *MetroChannelSpinBox;
    QSpacerItem *spacerItem13;
    QLabel *MetroBarNoteTextLabel;
    QComboBox *MetroBarNoteComboBox;
    QSpacerItem *spacerItem14;
    QLabel *MetroBarVelocityTextLabel;
    QSpinBox *MetroBarVelocitySpinBox;
    QSpacerItem *spacerItem15;
    QLabel *MetroBarDurationTextLabel;
    QSpinBox *MetroBarDurationSpinBox;
    QLabel *MetroBeatNoteTextLabel;
    QComboBox *MetroBeatNoteComboBox;
    QLabel *MetroBeatVelocityTextLabel;
    QSpinBox *MetroBeatVelocitySpinBox;
    QLabel *MetroBeatDurationTextLabel;
    QSpinBox *MetroBeatDurationSpinBox;
    QCheckBox *MidiMetroBusCheckBox;
    QLabel *MidiMetroOffsetTextLabel;
    QSpinBox *MidiMetroOffsetSpinBox;
    QWidget *DisplayTabPage;
    QVBoxLayout *vboxLayout4;
    QGroupBox *DisplayDefaultsGroupBox;
    QGridLayout *gridLayout10;
    QLabel *DisplayFormatTextLabel;
    QComboBox *DisplayFormatComboBox;
    QSpacerItem *spacerItem16;
    QLabel *BaseFontSizeTextLabel;
    QComboBox *BaseFontSizeComboBox;
    QGroupBox *DisplayOptionsGroupBox;
    QGridLayout *gridLayout11;
    QCheckBox *UseNativeDialogsCheckBox;
    QCheckBox *SyncViewHoldCheckBox;
    QSpacerItem *spacerItem17;
    QLabel *TrackColorSaturationTextLabel;
    QSpinBox *TrackColorSaturationSpinBox;
    QSpacerItem *spacerItem18;
    QGroupBox *DisplayCustomGroupBox;
    QGridLayout *gridLayout12;
    QLabel *CustomColorThemeTextLabel;
    QComboBox *CustomColorThemeComboBox;
    QToolButton *CustomColorThemeToolButton;
    QSpacerItem *spacerItem19;
    QLabel *CustomStyleThemeTextLabel;
    QComboBox *CustomStyleThemeComboBox;
    QSpacerItem *spacerItem20;
    QGroupBox *DisplayMetersGroupBox;
    QGridLayout *gridLayout13;
    QLabel *AudioMeterLevelTextLabel;
    QComboBox *AudioMeterLevelComboBox;
    QLineEdit *AudioMeterColorLineEdit;
    QToolButton *AudioMeterColorToolButton;
    QSpacerItem *spacerItem21;
    QLabel *MidiMeterLevelTextLabel;
    QComboBox *MidiMeterLevelComboBox;
    QLineEdit *MidiMeterColorLineEdit;
    QToolButton *MidiMeterColorToolButton;
    QSpacerItem *spacerItem22;
    QPushButton *ResetMeterColorsPushButton;
    QSpacerItem *spacerItem23;
    QGroupBox *DisplayMessagesGroupBox;
    QGridLayout *gridLayout14;
    QLabel *MessagesFontTextLabel;
    QPushButton *MessagesFontPushButton;
    QSpacerItem *spacerItem24;
    QCheckBox *MessagesLimitCheckBox;
    QSpinBox *MessagesLimitLinesSpinBox;
    QGroupBox *DisplayLoggingGroupBox;
    QGridLayout *gridLayout15;
    QComboBox *MessagesLogPathComboBox;
    QToolButton *MessagesLogPathToolButton;
    QCheckBox *MessagesLogCheckBox;
    QWidget *PluginsTabPage;
    QVBoxLayout *vboxLayout5;
    QGroupBox *PluginsPathsGroupBox;
    QGridLayout *gridLayout16;
    QHBoxLayout *hboxLayout;
    QComboBox *PluginTypeComboBox;
    QComboBox *PluginPathComboBox;
    QToolButton *PluginPathToolButton;
    QToolButton *PluginPathAddToolButton;
    QListWidget *PluginPathListWidget;
    QToolButton *PluginPathRemoveToolButton;
    QToolButton *PluginPathUpToolButton;
    QToolButton *PluginPathDownToolButton;
    QHBoxLayout *hboxLayout1;
    QLabel *Lv2PresetDirLabel;
    QComboBox *Lv2PresetDirComboBox;
    QToolButton *Lv2PresetDirToolButton;
    QGroupBox *PluginsInstrumentsGroupBox;
    QGridLayout *gridLayout17;
    QCheckBox *AudioOutputBusCheckBox;
    QCheckBox *AudioOutputAutoConnectCheckBox;
    QSpacerItem *spacerItem25;
    QGroupBox *PluginsEditorGroupBox;
    QGridLayout *gridLayout18;
    QCheckBox *OpenEditorCheckBox;
    QCheckBox *QueryEditorTypeCheckBox;
    QSpacerItem *spacerItem26;
    QGroupBox *PluginsBlacklistGroupBox;
    QGridLayout *gridLayout19;
    QHBoxLayout *hboxLayout2;
    QComboBox *PluginBlacklistComboBox;
    QToolButton *PluginBlacklistToolButton;
    QToolButton *PluginBlacklistAddToolButton;
    QListWidget *PluginBlacklistWidget;
    QToolButton *PluginBlacklistRemoveToolButton;
    QSpacerItem *spacerItem27;
    QToolButton *PluginBlacklistClearToolButton;
    QDialogButtonBox *DialogButtonBox;

    void setupUi(QDialog *qtractorOptionsForm)
    {
        if (qtractorOptionsForm->objectName().isEmpty())
            qtractorOptionsForm->setObjectName(QString::fromUtf8("qtractorOptionsForm"));
        qtractorOptionsForm->resize(520, 360);
        const QIcon icon = QIcon(QString::fromUtf8(":/images/qtractor.svg"));
        qtractorOptionsForm->setWindowIcon(icon);
        qtractorOptionsForm->setSizeGripEnabled(true);
        vboxLayout = new QVBoxLayout(qtractorOptionsForm);
        vboxLayout->setSpacing(4);
        vboxLayout->setContentsMargins(8, 8, 8, 8);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        OptionsTabWidget = new QTabWidget(qtractorOptionsForm);
        OptionsTabWidget->setObjectName(QString::fromUtf8("OptionsTabWidget"));
        OptionsTabWidget->setAcceptDrops(false);
        GeneralTabPage = new QWidget();
        GeneralTabPage->setObjectName(QString::fromUtf8("GeneralTabPage"));
        vboxLayout1 = new QVBoxLayout(GeneralTabPage);
        vboxLayout1->setSpacing(4);
        vboxLayout1->setContentsMargins(8, 8, 8, 8);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        GeneralSessionGroupBox = new QGroupBox(GeneralTabPage);
        GeneralSessionGroupBox->setObjectName(QString::fromUtf8("GeneralSessionGroupBox"));
        QFont font;
        font.setBold(true);
        GeneralSessionGroupBox->setFont(font);
        GeneralSessionGroupBox->setFlat(true);
        gridLayout = new QGridLayout(GeneralSessionGroupBox);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(8, 8, 8, 8);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        SessionFormatTextLabel = new QLabel(GeneralSessionGroupBox);
        SessionFormatTextLabel->setObjectName(QString::fromUtf8("SessionFormatTextLabel"));
        QFont font1;
        font1.setBold(false);
        SessionFormatTextLabel->setFont(font1);

        gridLayout->addWidget(SessionFormatTextLabel, 0, 0, 1, 1);

        SessionFormatComboBox = new QComboBox(GeneralSessionGroupBox);
        SessionFormatComboBox->setObjectName(QString::fromUtf8("SessionFormatComboBox"));
        SessionFormatComboBox->setFont(font1);

        gridLayout->addWidget(SessionFormatComboBox, 0, 1, 1, 2);

        spacerItem = new QSpacerItem(120, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 2, 1, 2);

        SessionTemplateCheckBox = new QCheckBox(GeneralSessionGroupBox);
        SessionTemplateCheckBox->setObjectName(QString::fromUtf8("SessionTemplateCheckBox"));
        SessionTemplateCheckBox->setFont(font1);

        gridLayout->addWidget(SessionTemplateCheckBox, 1, 0, 1, 1);

        SessionTemplatePathComboBox = new QComboBox(GeneralSessionGroupBox);
        SessionTemplatePathComboBox->setObjectName(QString::fromUtf8("SessionTemplatePathComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SessionTemplatePathComboBox->sizePolicy().hasHeightForWidth());
        SessionTemplatePathComboBox->setSizePolicy(sizePolicy);
        SessionTemplatePathComboBox->setMinimumSize(QSize(320, 0));
        SessionTemplatePathComboBox->setFont(font1);
        SessionTemplatePathComboBox->setEditable(true);

        gridLayout->addWidget(SessionTemplatePathComboBox, 1, 1, 1, 4);

        SessionTemplatePathToolButton = new QToolButton(GeneralSessionGroupBox);
        SessionTemplatePathToolButton->setObjectName(QString::fromUtf8("SessionTemplatePathToolButton"));
        SessionTemplatePathToolButton->setMinimumSize(QSize(22, 22));
        SessionTemplatePathToolButton->setMaximumSize(QSize(24, 24));
        SessionTemplatePathToolButton->setFont(font1);
        const QIcon icon1 = QIcon(QString::fromUtf8(":/images/fileOpen.png"));
        SessionTemplatePathToolButton->setIcon(icon1);

        gridLayout->addWidget(SessionTemplatePathToolButton, 1, 5, 1, 1);

        spacerItem1 = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 2, 0, 1, 5);

        SessionBackupCheckBox = new QCheckBox(GeneralSessionGroupBox);
        SessionBackupCheckBox->setObjectName(QString::fromUtf8("SessionBackupCheckBox"));
        SessionBackupCheckBox->setFont(font1);

        gridLayout->addWidget(SessionBackupCheckBox, 3, 0, 1, 2);

        SessionBackupModeComboBox = new QComboBox(GeneralSessionGroupBox);
        SessionBackupModeComboBox->addItem(QString());
        SessionBackupModeComboBox->addItem(QString());
        SessionBackupModeComboBox->setObjectName(QString::fromUtf8("SessionBackupModeComboBox"));
        SessionBackupModeComboBox->setFont(font1);

        gridLayout->addWidget(SessionBackupModeComboBox, 3, 2, 1, 3);

        SessionAutoSaveCheckBox = new QCheckBox(GeneralSessionGroupBox);
        SessionAutoSaveCheckBox->setObjectName(QString::fromUtf8("SessionAutoSaveCheckBox"));
        SessionAutoSaveCheckBox->setFont(font1);

        gridLayout->addWidget(SessionAutoSaveCheckBox, 4, 0, 1, 2);

        SessionAutoSaveSpinBox = new QSpinBox(GeneralSessionGroupBox);
        SessionAutoSaveSpinBox->setObjectName(QString::fromUtf8("SessionAutoSaveSpinBox"));
        SessionAutoSaveSpinBox->setFont(font1);
        SessionAutoSaveSpinBox->setMinimum(2);
        SessionAutoSaveSpinBox->setMaximum(120);
        SessionAutoSaveSpinBox->setValue(5);

        gridLayout->addWidget(SessionAutoSaveSpinBox, 4, 2, 1, 1);


        vboxLayout1->addWidget(GeneralSessionGroupBox);

        GeneralOptionsGroupBox = new QGroupBox(GeneralTabPage);
        GeneralOptionsGroupBox->setObjectName(QString::fromUtf8("GeneralOptionsGroupBox"));
        GeneralOptionsGroupBox->setFont(font);
        GeneralOptionsGroupBox->setFlat(true);
        gridLayout1 = new QGridLayout(GeneralOptionsGroupBox);
        gridLayout1->setSpacing(4);
        gridLayout1->setContentsMargins(8, 8, 8, 8);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        ConfirmRemoveCheckBox = new QCheckBox(GeneralOptionsGroupBox);
        ConfirmRemoveCheckBox->setObjectName(QString::fromUtf8("ConfirmRemoveCheckBox"));
        ConfirmRemoveCheckBox->setFont(font1);

        gridLayout1->addWidget(ConfirmRemoveCheckBox, 0, 0, 1, 1);

        ConfirmArchiveCheckBox = new QCheckBox(GeneralOptionsGroupBox);
        ConfirmArchiveCheckBox->setObjectName(QString::fromUtf8("ConfirmArchiveCheckBox"));
        ConfirmArchiveCheckBox->setFont(font1);

        gridLayout1->addWidget(ConfirmArchiveCheckBox, 1, 0, 1, 1);

        MaxRecentFilesTextLabel = new QLabel(GeneralOptionsGroupBox);
        MaxRecentFilesTextLabel->setObjectName(QString::fromUtf8("MaxRecentFilesTextLabel"));
        MaxRecentFilesTextLabel->setFont(font1);
        MaxRecentFilesTextLabel->setAlignment(Qt::AlignRight|Qt::AlignVCenter);

        gridLayout1->addWidget(MaxRecentFilesTextLabel, 0, 2, 1, 1);

        MaxRecentFilesSpinBox = new QSpinBox(GeneralOptionsGroupBox);
        MaxRecentFilesSpinBox->setObjectName(QString::fromUtf8("MaxRecentFilesSpinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(MaxRecentFilesSpinBox->sizePolicy().hasHeightForWidth());
        MaxRecentFilesSpinBox->setSizePolicy(sizePolicy1);
        MaxRecentFilesSpinBox->setFont(font1);
        MaxRecentFilesSpinBox->setMinimum(0);
        MaxRecentFilesSpinBox->setMaximum(20);
        MaxRecentFilesSpinBox->setValue(5);

        gridLayout1->addWidget(MaxRecentFilesSpinBox, 0, 3, 1, 1);

        StdoutCaptureCheckBox = new QCheckBox(GeneralOptionsGroupBox);
        StdoutCaptureCheckBox->setObjectName(QString::fromUtf8("StdoutCaptureCheckBox"));
        StdoutCaptureCheckBox->setFont(font1);

        gridLayout1->addWidget(StdoutCaptureCheckBox, 2, 0, 1, 1);

        CompletePathCheckBox = new QCheckBox(GeneralOptionsGroupBox);
        CompletePathCheckBox->setObjectName(QString::fromUtf8("CompletePathCheckBox"));
        CompletePathCheckBox->setFont(font1);

        gridLayout1->addWidget(CompletePathCheckBox, 3, 0, 1, 1);

        PeakAutoRemoveCheckBox = new QCheckBox(GeneralOptionsGroupBox);
        PeakAutoRemoveCheckBox->setObjectName(QString::fromUtf8("PeakAutoRemoveCheckBox"));
        PeakAutoRemoveCheckBox->setFont(font1);

        gridLayout1->addWidget(PeakAutoRemoveCheckBox, 4, 0, 1, 1);

        KeepToolsOnTopCheckBox = new QCheckBox(GeneralOptionsGroupBox);
        KeepToolsOnTopCheckBox->setObjectName(QString::fromUtf8("KeepToolsOnTopCheckBox"));
        KeepToolsOnTopCheckBox->setFont(font1);

        gridLayout1->addWidget(KeepToolsOnTopCheckBox, 5, 0, 1, 1);

        TrackViewDropSpanCheckBox = new QCheckBox(GeneralOptionsGroupBox);
        TrackViewDropSpanCheckBox->setObjectName(QString::fromUtf8("TrackViewDropSpanCheckBox"));
        TrackViewDropSpanCheckBox->setFont(font1);

        gridLayout1->addWidget(TrackViewDropSpanCheckBox, 2, 2, 1, 2);

        ShiftKeyModifierCheckBox = new QCheckBox(GeneralOptionsGroupBox);
        ShiftKeyModifierCheckBox->setObjectName(QString::fromUtf8("ShiftKeyModifierCheckBox"));
        ShiftKeyModifierCheckBox->setFont(font1);

        gridLayout1->addWidget(ShiftKeyModifierCheckBox, 3, 2, 1, 2);

        MidButtonModifierCheckBox = new QCheckBox(GeneralOptionsGroupBox);
        MidButtonModifierCheckBox->setObjectName(QString::fromUtf8("MidButtonModifierCheckBox"));
        MidButtonModifierCheckBox->setFont(font1);

        gridLayout1->addWidget(MidButtonModifierCheckBox, 4, 2, 1, 2);

        KeepEditorsOnTopCheckBox = new QCheckBox(GeneralOptionsGroupBox);
        KeepEditorsOnTopCheckBox->setObjectName(QString::fromUtf8("KeepEditorsOnTopCheckBox"));
        KeepEditorsOnTopCheckBox->setFont(font1);

        gridLayout1->addWidget(KeepEditorsOnTopCheckBox, 5, 2, 1, 2);


        vboxLayout1->addWidget(GeneralOptionsGroupBox);

        spacerItem2 = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem2);

        GeneralTransportGroupBox = new QGroupBox(GeneralTabPage);
        GeneralTransportGroupBox->setObjectName(QString::fromUtf8("GeneralTransportGroupBox"));
        GeneralTransportGroupBox->setFont(font);
        GeneralTransportGroupBox->setFlat(true);
        gridLayout2 = new QGridLayout(GeneralTransportGroupBox);
        gridLayout2->setSpacing(4);
        gridLayout2->setContentsMargins(8, 8, 8, 8);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        TransportModeTextLabel = new QLabel(GeneralTransportGroupBox);
        TransportModeTextLabel->setObjectName(QString::fromUtf8("TransportModeTextLabel"));
        TransportModeTextLabel->setFont(font1);
        TransportModeTextLabel->setAlignment(Qt::AlignRight|Qt::AlignVCenter);

        gridLayout2->addWidget(TransportModeTextLabel, 0, 0, 1, 1);

        TransportModeComboBox = new QComboBox(GeneralTransportGroupBox);
        const QIcon icon2 = QIcon(QString::fromUtf8(":/images/transportModeNone.png"));
        TransportModeComboBox->addItem(icon2, QString());
        const QIcon icon3 = QIcon(QString::fromUtf8(":/images/transportModeSlave.png"));
        TransportModeComboBox->addItem(icon3, QString());
        const QIcon icon4 = QIcon(QString::fromUtf8(":/images/transportModeMaster.png"));
        TransportModeComboBox->addItem(icon4, QString());
        const QIcon icon5 = QIcon(QString::fromUtf8(":/images/transportModeFull.png"));
        TransportModeComboBox->addItem(icon5, QString());
        TransportModeComboBox->setObjectName(QString::fromUtf8("TransportModeComboBox"));
        TransportModeComboBox->setFont(font1);

        gridLayout2->addWidget(TransportModeComboBox, 0, 1, 1, 1);

        TimebaseCheckBox = new QCheckBox(GeneralTransportGroupBox);
        TimebaseCheckBox->setObjectName(QString::fromUtf8("TimebaseCheckBox"));
        TimebaseCheckBox->setFont(font1);

        gridLayout2->addWidget(TimebaseCheckBox, 0, 2, 1, 1);

        spacerItem3 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem3, 0, 3, 1, 1);

        LoopRecordingModeTextLabel = new QLabel(GeneralTransportGroupBox);
        LoopRecordingModeTextLabel->setObjectName(QString::fromUtf8("LoopRecordingModeTextLabel"));
        LoopRecordingModeTextLabel->setFont(font1);
        LoopRecordingModeTextLabel->setAlignment(Qt::AlignRight|Qt::AlignVCenter);

        gridLayout2->addWidget(LoopRecordingModeTextLabel, 0, 4, 1, 1);

        LoopRecordingModeComboBox = new QComboBox(GeneralTransportGroupBox);
        LoopRecordingModeComboBox->addItem(QString());
        LoopRecordingModeComboBox->addItem(QString());
        LoopRecordingModeComboBox->addItem(QString());
        LoopRecordingModeComboBox->setObjectName(QString::fromUtf8("LoopRecordingModeComboBox"));
        LoopRecordingModeComboBox->setFont(font1);

        gridLayout2->addWidget(LoopRecordingModeComboBox, 0, 5, 1, 1);


        vboxLayout1->addWidget(GeneralTransportGroupBox);

        OptionsTabWidget->addTab(GeneralTabPage, QString());
        AudioTabPage = new QWidget();
        AudioTabPage->setObjectName(QString::fromUtf8("AudioTabPage"));
        vboxLayout2 = new QVBoxLayout(AudioTabPage);
        vboxLayout2->setSpacing(4);
        vboxLayout2->setContentsMargins(8, 8, 8, 8);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        AudioCaptureGroupBox = new QGroupBox(AudioTabPage);
        AudioCaptureGroupBox->setObjectName(QString::fromUtf8("AudioCaptureGroupBox"));
        AudioCaptureGroupBox->setFont(font);
        AudioCaptureGroupBox->setFlat(true);
        gridLayout3 = new QGridLayout(AudioCaptureGroupBox);
        gridLayout3->setSpacing(4);
        gridLayout3->setContentsMargins(8, 8, 8, 8);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        AudioCaptureTypeTextLabel = new QLabel(AudioCaptureGroupBox);
        AudioCaptureTypeTextLabel->setObjectName(QString::fromUtf8("AudioCaptureTypeTextLabel"));
        AudioCaptureTypeTextLabel->setFont(font1);

        gridLayout3->addWidget(AudioCaptureTypeTextLabel, 0, 0, 1, 1);

        AudioCaptureTypeComboBox = new qtractorAudioFileTypeComboBox(AudioCaptureGroupBox);
        AudioCaptureTypeComboBox->setObjectName(QString::fromUtf8("AudioCaptureTypeComboBox"));
        AudioCaptureTypeComboBox->setFont(font1);

        gridLayout3->addWidget(AudioCaptureTypeComboBox, 0, 1, 1, 3);

        spacerItem4 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout3->addItem(spacerItem4, 0, 4, 2, 1);

        AudioCaptureFormatTextLabel = new QLabel(AudioCaptureGroupBox);
        AudioCaptureFormatTextLabel->setObjectName(QString::fromUtf8("AudioCaptureFormatTextLabel"));
        AudioCaptureFormatTextLabel->setFont(font1);

        gridLayout3->addWidget(AudioCaptureFormatTextLabel, 1, 0, 1, 1);

        AudioCaptureFormatComboBox = new qtractorAudioFileFormatComboBox(AudioCaptureGroupBox);
        AudioCaptureFormatComboBox->setObjectName(QString::fromUtf8("AudioCaptureFormatComboBox"));
        AudioCaptureFormatComboBox->setFont(font1);

        gridLayout3->addWidget(AudioCaptureFormatComboBox, 1, 1, 1, 1);

        AudioCaptureQualityTextLabel = new QLabel(AudioCaptureGroupBox);
        AudioCaptureQualityTextLabel->setObjectName(QString::fromUtf8("AudioCaptureQualityTextLabel"));
        AudioCaptureQualityTextLabel->setFont(font1);
        AudioCaptureQualityTextLabel->setAlignment(Qt::AlignRight|Qt::AlignVCenter);

        gridLayout3->addWidget(AudioCaptureQualityTextLabel, 1, 2, 1, 1);

        AudioCaptureQualitySpinBox = new QSpinBox(AudioCaptureGroupBox);
        AudioCaptureQualitySpinBox->setObjectName(QString::fromUtf8("AudioCaptureQualitySpinBox"));
        AudioCaptureQualitySpinBox->setMaximumSize(QSize(60, 32767));
        AudioCaptureQualitySpinBox->setFont(font1);
        AudioCaptureQualitySpinBox->setMinimum(0);
        AudioCaptureQualitySpinBox->setMaximum(10);
        AudioCaptureQualitySpinBox->setSingleStep(1);
        AudioCaptureQualitySpinBox->setValue(4);

        gridLayout3->addWidget(AudioCaptureQualitySpinBox, 1, 3, 1, 1);


        vboxLayout2->addWidget(AudioCaptureGroupBox);

        AudioPlaybackGroupBox = new QGroupBox(AudioTabPage);
        AudioPlaybackGroupBox->setObjectName(QString::fromUtf8("AudioPlaybackGroupBox"));
        AudioPlaybackGroupBox->setFont(font);
        AudioPlaybackGroupBox->setFlat(true);
        gridLayout4 = new QGridLayout(AudioPlaybackGroupBox);
        gridLayout4->setSpacing(4);
        gridLayout4->setContentsMargins(8, 8, 8, 8);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        AudioAutoTimeStretchCheckBox = new QCheckBox(AudioPlaybackGroupBox);
        AudioAutoTimeStretchCheckBox->setObjectName(QString::fromUtf8("AudioAutoTimeStretchCheckBox"));
        AudioAutoTimeStretchCheckBox->setFont(font1);

        gridLayout4->addWidget(AudioAutoTimeStretchCheckBox, 0, 0, 1, 1);

        spacerItem5 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout4->addItem(spacerItem5, 0, 1, 3, 1);

        AudioResampleTypeTextLabel = new QLabel(AudioPlaybackGroupBox);
        AudioResampleTypeTextLabel->setObjectName(QString::fromUtf8("AudioResampleTypeTextLabel"));
        AudioResampleTypeTextLabel->setFont(font1);
        AudioResampleTypeTextLabel->setAlignment(Qt::AlignRight|Qt::AlignVCenter);

        gridLayout4->addWidget(AudioResampleTypeTextLabel, 0, 2, 1, 3);

        AudioResampleTypeComboBox = new QComboBox(AudioPlaybackGroupBox);
        AudioResampleTypeComboBox->addItem(QString());
        AudioResampleTypeComboBox->addItem(QString());
        AudioResampleTypeComboBox->addItem(QString());
        AudioResampleTypeComboBox->addItem(QString());
        AudioResampleTypeComboBox->addItem(QString());
        AudioResampleTypeComboBox->setObjectName(QString::fromUtf8("AudioResampleTypeComboBox"));
        AudioResampleTypeComboBox->setFont(font1);

        gridLayout4->addWidget(AudioResampleTypeComboBox, 0, 5, 1, 1);

        AudioWsolaTimeStretchCheckBox = new QCheckBox(AudioPlaybackGroupBox);
        AudioWsolaTimeStretchCheckBox->setObjectName(QString::fromUtf8("AudioWsolaTimeStretchCheckBox"));
        AudioWsolaTimeStretchCheckBox->setFont(font1);

        gridLayout4->addWidget(AudioWsolaTimeStretchCheckBox, 1, 0, 1, 1);

        AudioWsolaQuickSeekCheckBox = new QCheckBox(AudioPlaybackGroupBox);
        AudioWsolaQuickSeekCheckBox->setObjectName(QString::fromUtf8("AudioWsolaQuickSeekCheckBox"));
        AudioWsolaQuickSeekCheckBox->setFont(font1);

        gridLayout4->addWidget(AudioWsolaQuickSeekCheckBox, 2, 0, 1, 1);

        AudioPlayerBusCheckBox = new QCheckBox(AudioPlaybackGroupBox);
        AudioPlayerBusCheckBox->setObjectName(QString::fromUtf8("AudioPlayerBusCheckBox"));
        AudioPlayerBusCheckBox->setFont(font1);

        gridLayout4->addWidget(AudioPlayerBusCheckBox, 3, 0, 1, 3);

        AudioPlayerAutoConnectCheckBox = new QCheckBox(AudioPlaybackGroupBox);
        AudioPlayerAutoConnectCheckBox->setObjectName(QString::fromUtf8("AudioPlayerAutoConnectCheckBox"));
        AudioPlayerAutoConnectCheckBox->setFont(font1);

        gridLayout4->addWidget(AudioPlayerAutoConnectCheckBox, 3, 3, 1, 1);

        spacerItem6 = new QSpacerItem(120, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout4->addItem(spacerItem6, 3, 4, 1, 2);


        vboxLayout2->addWidget(AudioPlaybackGroupBox);

        spacerItem7 = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout2->addItem(spacerItem7);

        AudioMetronomeGroupBox = new QGroupBox(AudioTabPage);
        AudioMetronomeGroupBox->setObjectName(QString::fromUtf8("AudioMetronomeGroupBox"));
        AudioMetronomeGroupBox->setFont(font);
        AudioMetronomeGroupBox->setFlat(true);
        gridLayout5 = new QGridLayout(AudioMetronomeGroupBox);
        gridLayout5->setSpacing(4);
        gridLayout5->setContentsMargins(8, 8, 8, 8);
        gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
        AudioMetronomeCheckBox = new QCheckBox(AudioMetronomeGroupBox);
        AudioMetronomeCheckBox->setObjectName(QString::fromUtf8("AudioMetronomeCheckBox"));
        AudioMetronomeCheckBox->setFont(font1);

        gridLayout5->addWidget(AudioMetronomeCheckBox, 0, 0, 1, 2);

        AudioCountInModeLabel = new QLabel(AudioMetronomeGroupBox);
        AudioCountInModeLabel->setObjectName(QString::fromUtf8("AudioCountInModeLabel"));
        AudioCountInModeLabel->setFont(font1);
        AudioCountInModeLabel->setAlignment(Qt::AlignRight|Qt::AlignVCenter);

        gridLayout5->addWidget(AudioCountInModeLabel, 0, 2, 1, 1);

        AudioCountInModeComboBox = new QComboBox(AudioMetronomeGroupBox);
        AudioCountInModeComboBox->addItem(QString());
        AudioCountInModeComboBox->addItem(QString());
        AudioCountInModeComboBox->addItem(QString());
        AudioCountInModeComboBox->setObjectName(QString::fromUtf8("AudioCountInModeComboBox"));
        AudioCountInModeComboBox->setFont(font1);

        gridLayout5->addWidget(AudioCountInModeComboBox, 0, 3, 1, 2);

        AudioCountInBeatsSpinBox = new QSpinBox(AudioMetronomeGroupBox);
        AudioCountInBeatsSpinBox->setObjectName(QString::fromUtf8("AudioCountInBeatsSpinBox"));
        AudioCountInBeatsSpinBox->setMinimumSize(QSize(66, 0));
        AudioCountInBeatsSpinBox->setFont(font1);
        AudioCountInBeatsSpinBox->setMinimum(2);
        AudioCountInBeatsSpinBox->setMaximum(24);
        AudioCountInBeatsSpinBox->setValue(4);

        gridLayout5->addWidget(AudioCountInBeatsSpinBox, 0, 5, 1, 1);

        MetroBarFilenameTextLabel = new QLabel(AudioMetronomeGroupBox);
        MetroBarFilenameTextLabel->setObjectName(QString::fromUtf8("MetroBarFilenameTextLabel"));
        MetroBarFilenameTextLabel->setFont(font1);

        gridLayout5->addWidget(MetroBarFilenameTextLabel, 1, 0, 1, 1);

        MetroBarFilenameComboBox = new QComboBox(AudioMetronomeGroupBox);
        MetroBarFilenameComboBox->setObjectName(QString::fromUtf8("MetroBarFilenameComboBox"));
        sizePolicy.setHeightForWidth(MetroBarFilenameComboBox->sizePolicy().hasHeightForWidth());
        MetroBarFilenameComboBox->setSizePolicy(sizePolicy);
        MetroBarFilenameComboBox->setMinimumSize(QSize(320, 0));
        MetroBarFilenameComboBox->setFont(font1);
        MetroBarFilenameComboBox->setEditable(true);

        gridLayout5->addWidget(MetroBarFilenameComboBox, 1, 1, 1, 2);

        MetroBarFilenameToolButton = new QToolButton(AudioMetronomeGroupBox);
        MetroBarFilenameToolButton->setObjectName(QString::fromUtf8("MetroBarFilenameToolButton"));
        MetroBarFilenameToolButton->setMinimumSize(QSize(22, 22));
        MetroBarFilenameToolButton->setMaximumSize(QSize(24, 24));
        MetroBarFilenameToolButton->setFont(font1);
        MetroBarFilenameToolButton->setFocusPolicy(Qt::TabFocus);
        MetroBarFilenameToolButton->setIcon(icon1);

        gridLayout5->addWidget(MetroBarFilenameToolButton, 1, 3, 1, 1);

        MetroBarGainTextLabel = new QLabel(AudioMetronomeGroupBox);
        MetroBarGainTextLabel->setObjectName(QString::fromUtf8("MetroBarGainTextLabel"));
        MetroBarGainTextLabel->setFont(font1);

        gridLayout5->addWidget(MetroBarGainTextLabel, 1, 4, 1, 1);

        MetroBarGainSpinBox = new QDoubleSpinBox(AudioMetronomeGroupBox);
        MetroBarGainSpinBox->setObjectName(QString::fromUtf8("MetroBarGainSpinBox"));
        MetroBarGainSpinBox->setMinimumSize(QSize(66, 0));
        MetroBarGainSpinBox->setFont(font1);
        MetroBarGainSpinBox->setDecimals(1);
        MetroBarGainSpinBox->setMinimum(-60.000000000000000);
        MetroBarGainSpinBox->setMaximum(12.000000000000000);
        MetroBarGainSpinBox->setValue(0.000000000000000);

        gridLayout5->addWidget(MetroBarGainSpinBox, 1, 5, 1, 1);

        MetroBeatFilenameTextLabel = new QLabel(AudioMetronomeGroupBox);
        MetroBeatFilenameTextLabel->setObjectName(QString::fromUtf8("MetroBeatFilenameTextLabel"));
        MetroBeatFilenameTextLabel->setFont(font1);

        gridLayout5->addWidget(MetroBeatFilenameTextLabel, 2, 0, 1, 1);

        MetroBeatFilenameComboBox = new QComboBox(AudioMetronomeGroupBox);
        MetroBeatFilenameComboBox->setObjectName(QString::fromUtf8("MetroBeatFilenameComboBox"));
        sizePolicy.setHeightForWidth(MetroBeatFilenameComboBox->sizePolicy().hasHeightForWidth());
        MetroBeatFilenameComboBox->setSizePolicy(sizePolicy);
        MetroBeatFilenameComboBox->setMinimumSize(QSize(320, 0));
        MetroBeatFilenameComboBox->setFont(font1);
        MetroBeatFilenameComboBox->setEditable(true);

        gridLayout5->addWidget(MetroBeatFilenameComboBox, 2, 1, 1, 2);

        MetroBeatFilenameToolButton = new QToolButton(AudioMetronomeGroupBox);
        MetroBeatFilenameToolButton->setObjectName(QString::fromUtf8("MetroBeatFilenameToolButton"));
        MetroBeatFilenameToolButton->setMinimumSize(QSize(22, 22));
        MetroBeatFilenameToolButton->setMaximumSize(QSize(24, 24));
        MetroBeatFilenameToolButton->setFont(font1);
        MetroBeatFilenameToolButton->setFocusPolicy(Qt::TabFocus);
        MetroBeatFilenameToolButton->setIcon(icon1);

        gridLayout5->addWidget(MetroBeatFilenameToolButton, 2, 3, 1, 1);

        MetroBeatGainTextLabel = new QLabel(AudioMetronomeGroupBox);
        MetroBeatGainTextLabel->setObjectName(QString::fromUtf8("MetroBeatGainTextLabel"));
        MetroBeatGainTextLabel->setFont(font1);

        gridLayout5->addWidget(MetroBeatGainTextLabel, 2, 4, 1, 2);

        MetroBeatGainSpinBox = new QDoubleSpinBox(AudioMetronomeGroupBox);
        MetroBeatGainSpinBox->setObjectName(QString::fromUtf8("MetroBeatGainSpinBox"));
        MetroBeatGainSpinBox->setMinimumSize(QSize(66, 0));
        MetroBeatGainSpinBox->setFont(font1);
        MetroBeatGainSpinBox->setDecimals(1);
        MetroBeatGainSpinBox->setMinimum(-60.000000000000000);
        MetroBeatGainSpinBox->setMaximum(12.000000000000000);
        MetroBeatGainSpinBox->setValue(0.000000000000000);

        gridLayout5->addWidget(MetroBeatGainSpinBox, 2, 5, 1, 1);

        AudioMetroBusCheckBox = new QCheckBox(AudioMetronomeGroupBox);
        AudioMetroBusCheckBox->setObjectName(QString::fromUtf8("AudioMetroBusCheckBox"));
        AudioMetroBusCheckBox->setFont(font1);

        gridLayout5->addWidget(AudioMetroBusCheckBox, 3, 0, 1, 2);

        AudioMetroAutoConnectCheckBox = new QCheckBox(AudioMetronomeGroupBox);
        AudioMetroAutoConnectCheckBox->setObjectName(QString::fromUtf8("AudioMetroAutoConnectCheckBox"));
        AudioMetroAutoConnectCheckBox->setFont(font1);

        gridLayout5->addWidget(AudioMetroAutoConnectCheckBox, 3, 2, 1, 1);

        AudioMetroOffsetTextLabel = new QLabel(AudioMetronomeGroupBox);
        AudioMetroOffsetTextLabel->setObjectName(QString::fromUtf8("AudioMetroOffsetTextLabel"));
        AudioMetroOffsetTextLabel->setFont(font1);
        AudioMetroOffsetTextLabel->setAlignment(Qt::AlignRight|Qt::AlignVCenter);

        gridLayout5->addWidget(AudioMetroOffsetTextLabel, 3, 3, 1, 2);

        AudioMetroOffsetSpinBox = new qtractorTimeSpinBox(AudioMetronomeGroupBox);
        AudioMetroOffsetSpinBox->setObjectName(QString::fromUtf8("AudioMetroOffsetSpinBox"));
        AudioMetroOffsetSpinBox->setFont(font1);

        gridLayout5->addWidget(AudioMetroOffsetSpinBox, 3, 5, 1, 1);


        vboxLayout2->addWidget(AudioMetronomeGroupBox);

        OptionsTabWidget->addTab(AudioTabPage, QString());
        MidiTabPage = new QWidget();
        MidiTabPage->setObjectName(QString::fromUtf8("MidiTabPage"));
        vboxLayout3 = new QVBoxLayout(MidiTabPage);
        vboxLayout3->setSpacing(4);
        vboxLayout3->setContentsMargins(8, 8, 8, 8);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        MidiCaptureGroupBox = new QGroupBox(MidiTabPage);
        MidiCaptureGroupBox->setObjectName(QString::fromUtf8("MidiCaptureGroupBox"));
        MidiCaptureGroupBox->setFont(font);
        MidiCaptureGroupBox->setFlat(true);
        gridLayout6 = new QGridLayout(MidiCaptureGroupBox);
        gridLayout6->setSpacing(4);
        gridLayout6->setContentsMargins(8, 8, 8, 8);
        gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
        MidiCaptureFormatTextLabel = new QLabel(MidiCaptureGroupBox);
        MidiCaptureFormatTextLabel->setObjectName(QString::fromUtf8("MidiCaptureFormatTextLabel"));
        MidiCaptureFormatTextLabel->setFont(font1);

        gridLayout6->addWidget(MidiCaptureFormatTextLabel, 0, 0, 1, 1);

        MidiCaptureFormatComboBox = new qtractorMidiFileFormatComboBox(MidiCaptureGroupBox);
        MidiCaptureFormatComboBox->setObjectName(QString::fromUtf8("MidiCaptureFormatComboBox"));
        MidiCaptureFormatComboBox->setFont(font1);

        gridLayout6->addWidget(MidiCaptureFormatComboBox, 0, 1, 1, 2);

        spacerItem8 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout6->addItem(spacerItem8, 0, 3, 1, 1);

        MidiCaptureQuantizeTextLabel = new QLabel(MidiCaptureGroupBox);
        MidiCaptureQuantizeTextLabel->setObjectName(QString::fromUtf8("MidiCaptureQuantizeTextLabel"));
        MidiCaptureQuantizeTextLabel->setFont(font1);
        MidiCaptureQuantizeTextLabel->setAlignment(Qt::AlignRight|Qt::AlignVCenter);

        gridLayout6->addWidget(MidiCaptureQuantizeTextLabel, 0, 4, 1, 1);

        MidiCaptureQuantizeComboBox = new QComboBox(MidiCaptureGroupBox);
        MidiCaptureQuantizeComboBox->setObjectName(QString::fromUtf8("MidiCaptureQuantizeComboBox"));
        MidiCaptureQuantizeComboBox->setMaximumSize(QSize(120, 32767));
        MidiCaptureQuantizeComboBox->setFont(font1);

        gridLayout6->addWidget(MidiCaptureQuantizeComboBox, 0, 5, 1, 1);


        vboxLayout3->addWidget(MidiCaptureGroupBox);

        MidiPlaybackGroupBox = new QGroupBox(MidiTabPage);
        MidiPlaybackGroupBox->setObjectName(QString::fromUtf8("MidiPlaybackGroupBox"));
        MidiPlaybackGroupBox->setFont(font);
        MidiPlaybackGroupBox->setFlat(true);
        gridLayout7 = new QGridLayout(MidiPlaybackGroupBox);
        gridLayout7->setSpacing(4);
        gridLayout7->setContentsMargins(8, 8, 8, 8);
        gridLayout7->setObjectName(QString::fromUtf8("gridLayout7"));
        MidiQueueTimerTextLabel = new QLabel(MidiPlaybackGroupBox);
        MidiQueueTimerTextLabel->setObjectName(QString::fromUtf8("MidiQueueTimerTextLabel"));
        MidiQueueTimerTextLabel->setFont(font1);

        gridLayout7->addWidget(MidiQueueTimerTextLabel, 0, 0, 1, 1);

        MidiQueueTimerComboBox = new QComboBox(MidiPlaybackGroupBox);
        MidiQueueTimerComboBox->setObjectName(QString::fromUtf8("MidiQueueTimerComboBox"));
        MidiQueueTimerComboBox->setFont(font1);

        gridLayout7->addWidget(MidiQueueTimerComboBox, 0, 1, 1, 1);

        spacerItem9 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout7->addItem(spacerItem9, 0, 2, 1, 1);

        MidiDriftCorrectCheckBox = new QCheckBox(MidiPlaybackGroupBox);
        MidiDriftCorrectCheckBox->setObjectName(QString::fromUtf8("MidiDriftCorrectCheckBox"));
        MidiDriftCorrectCheckBox->setFont(font1);

        gridLayout7->addWidget(MidiDriftCorrectCheckBox, 0, 3, 1, 1);

        MidiPlayerBusCheckBox = new QCheckBox(MidiPlaybackGroupBox);
        MidiPlayerBusCheckBox->setObjectName(QString::fromUtf8("MidiPlayerBusCheckBox"));
        MidiPlayerBusCheckBox->setFont(font1);

        gridLayout7->addWidget(MidiPlayerBusCheckBox, 1, 0, 1, 3);

        MidiResetAllControllersCheckBox = new QCheckBox(MidiPlaybackGroupBox);
        MidiResetAllControllersCheckBox->setObjectName(QString::fromUtf8("MidiResetAllControllersCheckBox"));
        MidiResetAllControllersCheckBox->setFont(font1);

        gridLayout7->addWidget(MidiResetAllControllersCheckBox, 1, 3, 1, 1);


        vboxLayout3->addWidget(MidiPlaybackGroupBox);

        MidiControlGroupBox = new QGroupBox(MidiTabPage);
        MidiControlGroupBox->setObjectName(QString::fromUtf8("MidiControlGroupBox"));
        MidiControlGroupBox->setFont(font);
        MidiControlGroupBox->setFlat(true);
        gridLayout8 = new QGridLayout(MidiControlGroupBox);
        gridLayout8->setSpacing(6);
        gridLayout8->setContentsMargins(9, 9, 9, 9);
        gridLayout8->setObjectName(QString::fromUtf8("gridLayout8"));
        MidiMmcModeTextLabel = new QLabel(MidiControlGroupBox);
        MidiMmcModeTextLabel->setObjectName(QString::fromUtf8("MidiMmcModeTextLabel"));
        MidiMmcModeTextLabel->setFont(font1);

        gridLayout8->addWidget(MidiMmcModeTextLabel, 0, 0, 1, 1);

        MidiMmcModeComboBox = new QComboBox(MidiControlGroupBox);
        MidiMmcModeComboBox->addItem(QString());
        MidiMmcModeComboBox->addItem(QString());
        MidiMmcModeComboBox->addItem(QString());
        MidiMmcModeComboBox->addItem(QString());
        MidiMmcModeComboBox->setObjectName(QString::fromUtf8("MidiMmcModeComboBox"));
        MidiMmcModeComboBox->setFont(font1);

        gridLayout8->addWidget(MidiMmcModeComboBox, 0, 1, 1, 1);

        MidiMmcDeviceTextLabel = new QLabel(MidiControlGroupBox);
        MidiMmcDeviceTextLabel->setObjectName(QString::fromUtf8("MidiMmcDeviceTextLabel"));
        MidiMmcDeviceTextLabel->setFont(font1);

        gridLayout8->addWidget(MidiMmcDeviceTextLabel, 0, 2, 1, 1);

        MidiMmcDeviceComboBox = new QComboBox(MidiControlGroupBox);
        MidiMmcDeviceComboBox->setObjectName(QString::fromUtf8("MidiMmcDeviceComboBox"));
        MidiMmcDeviceComboBox->setFont(font1);

        gridLayout8->addWidget(MidiMmcDeviceComboBox, 0, 3, 1, 1);

        spacerItem10 = new QSpacerItem(4, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout8->addItem(spacerItem10, 0, 4, 1, 1);

        MidiSppModeTextLabel = new QLabel(MidiControlGroupBox);
        MidiSppModeTextLabel->setObjectName(QString::fromUtf8("MidiSppModeTextLabel"));
        MidiSppModeTextLabel->setFont(font1);

        gridLayout8->addWidget(MidiSppModeTextLabel, 0, 5, 1, 1);

        MidiSppModeComboBox = new QComboBox(MidiControlGroupBox);
        MidiSppModeComboBox->addItem(QString());
        MidiSppModeComboBox->addItem(QString());
        MidiSppModeComboBox->addItem(QString());
        MidiSppModeComboBox->addItem(QString());
        MidiSppModeComboBox->setObjectName(QString::fromUtf8("MidiSppModeComboBox"));
        MidiSppModeComboBox->setFont(font1);

        gridLayout8->addWidget(MidiSppModeComboBox, 0, 6, 1, 1);

        spacerItem11 = new QSpacerItem(4, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout8->addItem(spacerItem11, 0, 7, 1, 1);

        MidiClockModeTextLabel = new QLabel(MidiControlGroupBox);
        MidiClockModeTextLabel->setObjectName(QString::fromUtf8("MidiClockModeTextLabel"));
        MidiClockModeTextLabel->setFont(font1);

        gridLayout8->addWidget(MidiClockModeTextLabel, 0, 8, 1, 1);

        MidiClockModeComboBox = new QComboBox(MidiControlGroupBox);
        MidiClockModeComboBox->addItem(QString());
        MidiClockModeComboBox->addItem(QString());
        MidiClockModeComboBox->addItem(QString());
        MidiClockModeComboBox->addItem(QString());
        MidiClockModeComboBox->setObjectName(QString::fromUtf8("MidiClockModeComboBox"));
        MidiClockModeComboBox->setFont(font1);

        gridLayout8->addWidget(MidiClockModeComboBox, 0, 9, 1, 1);

        MidiControlBusCheckBox = new QCheckBox(MidiControlGroupBox);
        MidiControlBusCheckBox->setObjectName(QString::fromUtf8("MidiControlBusCheckBox"));
        MidiControlBusCheckBox->setFont(font1);

        gridLayout8->addWidget(MidiControlBusCheckBox, 1, 0, 1, 4);


        vboxLayout3->addWidget(MidiControlGroupBox);

        spacerItem12 = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout3->addItem(spacerItem12);

        MidiMetronomeGroupBox = new QGroupBox(MidiTabPage);
        MidiMetronomeGroupBox->setObjectName(QString::fromUtf8("MidiMetronomeGroupBox"));
        MidiMetronomeGroupBox->setFont(font);
        MidiMetronomeGroupBox->setFlat(true);
        gridLayout9 = new QGridLayout(MidiMetronomeGroupBox);
        gridLayout9->setSpacing(4);
        gridLayout9->setContentsMargins(8, 8, 8, 8);
        gridLayout9->setObjectName(QString::fromUtf8("gridLayout9"));
        MidiMetronomeCheckBox = new QCheckBox(MidiMetronomeGroupBox);
        MidiMetronomeCheckBox->setObjectName(QString::fromUtf8("MidiMetronomeCheckBox"));
        MidiMetronomeCheckBox->setFont(font1);

        gridLayout9->addWidget(MidiMetronomeCheckBox, 0, 0, 1, 9);

        MidiCountInModeLabel = new QLabel(MidiMetronomeGroupBox);
        MidiCountInModeLabel->setObjectName(QString::fromUtf8("MidiCountInModeLabel"));
        MidiCountInModeLabel->setFont(font1);
        MidiCountInModeLabel->setAlignment(Qt::AlignRight|Qt::AlignVCenter);

        gridLayout9->addWidget(MidiCountInModeLabel, 0, 5, 1, 2);

        MidiCountInModeComboBox = new QComboBox(MidiMetronomeGroupBox);
        MidiCountInModeComboBox->addItem(QString());
        MidiCountInModeComboBox->addItem(QString());
        MidiCountInModeComboBox->addItem(QString());
        MidiCountInModeComboBox->setObjectName(QString::fromUtf8("MidiCountInModeComboBox"));
        MidiCountInModeComboBox->setFont(font1);

        gridLayout9->addWidget(MidiCountInModeComboBox, 0, 7, 1, 1);

        MidiCountInBeatsSpinBox = new QSpinBox(MidiMetronomeGroupBox);
        MidiCountInBeatsSpinBox->setObjectName(QString::fromUtf8("MidiCountInBeatsSpinBox"));
        MidiCountInBeatsSpinBox->setMinimumSize(QSize(66, 0));
        MidiCountInBeatsSpinBox->setFont(font1);
        MidiCountInBeatsSpinBox->setMinimum(2);
        MidiCountInBeatsSpinBox->setMaximum(24);
        MidiCountInBeatsSpinBox->setValue(4);

        gridLayout9->addWidget(MidiCountInBeatsSpinBox, 0, 8, 1, 1);

        MetroChannelTextLabel = new QLabel(MidiMetronomeGroupBox);
        MetroChannelTextLabel->setObjectName(QString::fromUtf8("MetroChannelTextLabel"));
        MetroChannelTextLabel->setFont(font1);

        gridLayout9->addWidget(MetroChannelTextLabel, 1, 0, 1, 1);

        MetroChannelSpinBox = new QSpinBox(MidiMetronomeGroupBox);
        MetroChannelSpinBox->setObjectName(QString::fromUtf8("MetroChannelSpinBox"));
        MetroChannelSpinBox->setFont(font1);
        MetroChannelSpinBox->setMinimum(1);
        MetroChannelSpinBox->setMaximum(16);
        MetroChannelSpinBox->setValue(10);

        gridLayout9->addWidget(MetroChannelSpinBox, 1, 1, 1, 1);

        spacerItem13 = new QSpacerItem(120, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout9->addItem(spacerItem13, 1, 2, 1, 6);

        MetroBarNoteTextLabel = new QLabel(MidiMetronomeGroupBox);
        MetroBarNoteTextLabel->setObjectName(QString::fromUtf8("MetroBarNoteTextLabel"));
        MetroBarNoteTextLabel->setFont(font1);

        gridLayout9->addWidget(MetroBarNoteTextLabel, 2, 0, 1, 1);

        MetroBarNoteComboBox = new QComboBox(MidiMetronomeGroupBox);
        MetroBarNoteComboBox->setObjectName(QString::fromUtf8("MetroBarNoteComboBox"));
        MetroBarNoteComboBox->setMinimumSize(QSize(120, 0));
        MetroBarNoteComboBox->setFont(font1);

        gridLayout9->addWidget(MetroBarNoteComboBox, 2, 1, 1, 2);

        spacerItem14 = new QSpacerItem(4, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout9->addItem(spacerItem14, 2, 3, 2, 1);

        MetroBarVelocityTextLabel = new QLabel(MidiMetronomeGroupBox);
        MetroBarVelocityTextLabel->setObjectName(QString::fromUtf8("MetroBarVelocityTextLabel"));
        MetroBarVelocityTextLabel->setFont(font1);

        gridLayout9->addWidget(MetroBarVelocityTextLabel, 2, 4, 1, 1);

        MetroBarVelocitySpinBox = new QSpinBox(MidiMetronomeGroupBox);
        MetroBarVelocitySpinBox->setObjectName(QString::fromUtf8("MetroBarVelocitySpinBox"));
        MetroBarVelocitySpinBox->setFont(font1);
        MetroBarVelocitySpinBox->setMinimum(1);
        MetroBarVelocitySpinBox->setMaximum(127);
        MetroBarVelocitySpinBox->setValue(96);

        gridLayout9->addWidget(MetroBarVelocitySpinBox, 2, 5, 1, 1);

        spacerItem15 = new QSpacerItem(4, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout9->addItem(spacerItem15, 2, 6, 2, 1);

        MetroBarDurationTextLabel = new QLabel(MidiMetronomeGroupBox);
        MetroBarDurationTextLabel->setObjectName(QString::fromUtf8("MetroBarDurationTextLabel"));
        MetroBarDurationTextLabel->setFont(font1);

        gridLayout9->addWidget(MetroBarDurationTextLabel, 2, 7, 1, 1);

        MetroBarDurationSpinBox = new QSpinBox(MidiMetronomeGroupBox);
        MetroBarDurationSpinBox->setObjectName(QString::fromUtf8("MetroBarDurationSpinBox"));
        MetroBarDurationSpinBox->setFont(font1);
        MetroBarDurationSpinBox->setMinimum(1);
        MetroBarDurationSpinBox->setMaximum(9999);
        MetroBarDurationSpinBox->setSingleStep(8);
        MetroBarDurationSpinBox->setValue(48);

        gridLayout9->addWidget(MetroBarDurationSpinBox, 2, 8, 1, 1);

        MetroBeatNoteTextLabel = new QLabel(MidiMetronomeGroupBox);
        MetroBeatNoteTextLabel->setObjectName(QString::fromUtf8("MetroBeatNoteTextLabel"));
        MetroBeatNoteTextLabel->setFont(font1);

        gridLayout9->addWidget(MetroBeatNoteTextLabel, 3, 0, 1, 1);

        MetroBeatNoteComboBox = new QComboBox(MidiMetronomeGroupBox);
        MetroBeatNoteComboBox->setObjectName(QString::fromUtf8("MetroBeatNoteComboBox"));
        MetroBeatNoteComboBox->setMinimumSize(QSize(120, 0));
        MetroBeatNoteComboBox->setFont(font1);

        gridLayout9->addWidget(MetroBeatNoteComboBox, 3, 1, 1, 2);

        MetroBeatVelocityTextLabel = new QLabel(MidiMetronomeGroupBox);
        MetroBeatVelocityTextLabel->setObjectName(QString::fromUtf8("MetroBeatVelocityTextLabel"));
        MetroBeatVelocityTextLabel->setFont(font1);

        gridLayout9->addWidget(MetroBeatVelocityTextLabel, 3, 4, 1, 1);

        MetroBeatVelocitySpinBox = new QSpinBox(MidiMetronomeGroupBox);
        MetroBeatVelocitySpinBox->setObjectName(QString::fromUtf8("MetroBeatVelocitySpinBox"));
        MetroBeatVelocitySpinBox->setFont(font1);
        MetroBeatVelocitySpinBox->setMinimum(1);
        MetroBeatVelocitySpinBox->setMaximum(127);
        MetroBeatVelocitySpinBox->setValue(64);

        gridLayout9->addWidget(MetroBeatVelocitySpinBox, 3, 5, 1, 1);

        MetroBeatDurationTextLabel = new QLabel(MidiMetronomeGroupBox);
        MetroBeatDurationTextLabel->setObjectName(QString::fromUtf8("MetroBeatDurationTextLabel"));
        MetroBeatDurationTextLabel->setFont(font1);

        gridLayout9->addWidget(MetroBeatDurationTextLabel, 3, 7, 1, 1);

        MetroBeatDurationSpinBox = new QSpinBox(MidiMetronomeGroupBox);
        MetroBeatDurationSpinBox->setObjectName(QString::fromUtf8("MetroBeatDurationSpinBox"));
        MetroBeatDurationSpinBox->setFont(font1);
        MetroBeatDurationSpinBox->setMinimum(1);
        MetroBeatDurationSpinBox->setMaximum(9999);
        MetroBeatDurationSpinBox->setSingleStep(8);
        MetroBeatDurationSpinBox->setValue(24);

        gridLayout9->addWidget(MetroBeatDurationSpinBox, 3, 8, 1, 1);

        MidiMetroBusCheckBox = new QCheckBox(MidiMetronomeGroupBox);
        MidiMetroBusCheckBox->setObjectName(QString::fromUtf8("MidiMetroBusCheckBox"));
        MidiMetroBusCheckBox->setFont(font1);

        gridLayout9->addWidget(MidiMetroBusCheckBox, 4, 0, 1, 5);

        MidiMetroOffsetTextLabel = new QLabel(MidiMetronomeGroupBox);
        MidiMetroOffsetTextLabel->setObjectName(QString::fromUtf8("MidiMetroOffsetTextLabel"));
        MidiMetroOffsetTextLabel->setFont(font1);
        MidiMetroOffsetTextLabel->setAlignment(Qt::AlignRight|Qt::AlignVCenter);

        gridLayout9->addWidget(MidiMetroOffsetTextLabel, 4, 5, 1, 3);

        MidiMetroOffsetSpinBox = new QSpinBox(MidiMetronomeGroupBox);
        MidiMetroOffsetSpinBox->setObjectName(QString::fromUtf8("MidiMetroOffsetSpinBox"));
        MidiMetroOffsetSpinBox->setFont(font1);
        MidiMetroOffsetSpinBox->setMinimum(0);
        MidiMetroOffsetSpinBox->setMaximum(9999);
        MidiMetroOffsetSpinBox->setSingleStep(8);
        MidiMetroOffsetSpinBox->setValue(0);

        gridLayout9->addWidget(MidiMetroOffsetSpinBox, 4, 8, 1, 1);


        vboxLayout3->addWidget(MidiMetronomeGroupBox);

        OptionsTabWidget->addTab(MidiTabPage, QString());
        DisplayTabPage = new QWidget();
        DisplayTabPage->setObjectName(QString::fromUtf8("DisplayTabPage"));
        vboxLayout4 = new QVBoxLayout(DisplayTabPage);
        vboxLayout4->setSpacing(4);
        vboxLayout4->setContentsMargins(8, 8, 8, 8);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        DisplayDefaultsGroupBox = new QGroupBox(DisplayTabPage);
        DisplayDefaultsGroupBox->setObjectName(QString::fromUtf8("DisplayDefaultsGroupBox"));
        DisplayDefaultsGroupBox->setFont(font);
        DisplayDefaultsGroupBox->setFlat(true);
        gridLayout10 = new QGridLayout(DisplayDefaultsGroupBox);
        gridLayout10->setSpacing(4);
        gridLayout10->setContentsMargins(8, 8, 8, 8);
        gridLayout10->setObjectName(QString::fromUtf8("gridLayout10"));
        DisplayFormatTextLabel = new QLabel(DisplayDefaultsGroupBox);
        DisplayFormatTextLabel->setObjectName(QString::fromUtf8("DisplayFormatTextLabel"));
        DisplayFormatTextLabel->setFont(font1);

        gridLayout10->addWidget(DisplayFormatTextLabel, 0, 0, 1, 1);

        DisplayFormatComboBox = new QComboBox(DisplayDefaultsGroupBox);
        DisplayFormatComboBox->addItem(QString());
        DisplayFormatComboBox->addItem(QString());
        DisplayFormatComboBox->addItem(QString());
        DisplayFormatComboBox->setObjectName(QString::fromUtf8("DisplayFormatComboBox"));
        DisplayFormatComboBox->setFont(font1);

        gridLayout10->addWidget(DisplayFormatComboBox, 0, 1, 1, 1);

        spacerItem16 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout10->addItem(spacerItem16, 0, 2, 1, 1);

        BaseFontSizeTextLabel = new QLabel(DisplayDefaultsGroupBox);
        BaseFontSizeTextLabel->setObjectName(QString::fromUtf8("BaseFontSizeTextLabel"));
        BaseFontSizeTextLabel->setFont(font1);
        BaseFontSizeTextLabel->setAlignment(Qt::AlignRight|Qt::AlignVCenter);

        gridLayout10->addWidget(BaseFontSizeTextLabel, 0, 3, 1, 1);

        BaseFontSizeComboBox = new QComboBox(DisplayDefaultsGroupBox);
        BaseFontSizeComboBox->addItem(QString());
        BaseFontSizeComboBox->addItem(QString());
        BaseFontSizeComboBox->addItem(QString());
        BaseFontSizeComboBox->addItem(QString());
        BaseFontSizeComboBox->addItem(QString());
        BaseFontSizeComboBox->addItem(QString());
        BaseFontSizeComboBox->addItem(QString());
        BaseFontSizeComboBox->addItem(QString());
        BaseFontSizeComboBox->setObjectName(QString::fromUtf8("BaseFontSizeComboBox"));
        BaseFontSizeComboBox->setFont(font1);
        BaseFontSizeComboBox->setEditable(true);

        gridLayout10->addWidget(BaseFontSizeComboBox, 0, 4, 1, 1);


        vboxLayout4->addWidget(DisplayDefaultsGroupBox);

        DisplayOptionsGroupBox = new QGroupBox(DisplayTabPage);
        DisplayOptionsGroupBox->setObjectName(QString::fromUtf8("DisplayOptionsGroupBox"));
        DisplayOptionsGroupBox->setFont(font);
        DisplayOptionsGroupBox->setFlat(true);
        gridLayout11 = new QGridLayout(DisplayOptionsGroupBox);
        gridLayout11->setSpacing(4);
        gridLayout11->setContentsMargins(8, 8, 8, 8);
        gridLayout11->setObjectName(QString::fromUtf8("gridLayout11"));
        UseNativeDialogsCheckBox = new QCheckBox(DisplayOptionsGroupBox);
        UseNativeDialogsCheckBox->setObjectName(QString::fromUtf8("UseNativeDialogsCheckBox"));
        UseNativeDialogsCheckBox->setFont(font1);

        gridLayout11->addWidget(UseNativeDialogsCheckBox, 0, 0, 1, 1);

        SyncViewHoldCheckBox = new QCheckBox(DisplayOptionsGroupBox);
        SyncViewHoldCheckBox->setObjectName(QString::fromUtf8("SyncViewHoldCheckBox"));
        SyncViewHoldCheckBox->setFont(font1);

        gridLayout11->addWidget(SyncViewHoldCheckBox, 1, 0, 1, 1);

        spacerItem17 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout11->addItem(spacerItem17, 0, 1, 1, 1);

        TrackColorSaturationTextLabel = new QLabel(DisplayOptionsGroupBox);
        TrackColorSaturationTextLabel->setObjectName(QString::fromUtf8("TrackColorSaturationTextLabel"));
        TrackColorSaturationTextLabel->setFont(font1);
        TrackColorSaturationTextLabel->setAlignment(Qt::AlignRight|Qt::AlignVCenter);

        gridLayout11->addWidget(TrackColorSaturationTextLabel, 0, 2, 1, 1);

        TrackColorSaturationSpinBox = new QSpinBox(DisplayOptionsGroupBox);
        TrackColorSaturationSpinBox->setObjectName(QString::fromUtf8("TrackColorSaturationSpinBox"));
        TrackColorSaturationSpinBox->setFont(font1);
        TrackColorSaturationSpinBox->setMinimum(0);
        TrackColorSaturationSpinBox->setMaximum(500);
        TrackColorSaturationSpinBox->setValue(100);

        gridLayout11->addWidget(TrackColorSaturationSpinBox, 0, 3, 1, 1);

        spacerItem18 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout11->addItem(spacerItem18, 1, 1, 1, 3);


        vboxLayout4->addWidget(DisplayOptionsGroupBox);

        DisplayCustomGroupBox = new QGroupBox(DisplayTabPage);
        DisplayCustomGroupBox->setObjectName(QString::fromUtf8("DisplayCustomGroupBox"));
        DisplayCustomGroupBox->setFont(font);
        DisplayCustomGroupBox->setFlat(true);
        gridLayout12 = new QGridLayout(DisplayCustomGroupBox);
        gridLayout12->setSpacing(4);
        gridLayout12->setContentsMargins(8, 8, 8, 8);
        gridLayout12->setObjectName(QString::fromUtf8("gridLayout12"));
        CustomColorThemeTextLabel = new QLabel(DisplayCustomGroupBox);
        CustomColorThemeTextLabel->setObjectName(QString::fromUtf8("CustomColorThemeTextLabel"));
        CustomColorThemeTextLabel->setFont(font1);
        CustomColorThemeTextLabel->setAlignment(Qt::AlignRight|Qt::AlignVCenter);

        gridLayout12->addWidget(CustomColorThemeTextLabel, 0, 0, 1, 1);

        CustomColorThemeComboBox = new QComboBox(DisplayCustomGroupBox);
        CustomColorThemeComboBox->addItem(QString());
        CustomColorThemeComboBox->addItem(QString());
        CustomColorThemeComboBox->addItem(QString());
        CustomColorThemeComboBox->setObjectName(QString::fromUtf8("CustomColorThemeComboBox"));
        CustomColorThemeComboBox->setFont(font1);
        CustomColorThemeComboBox->setEditable(false);

        gridLayout12->addWidget(CustomColorThemeComboBox, 0, 1, 1, 1);

        CustomColorThemeToolButton = new QToolButton(DisplayCustomGroupBox);
        CustomColorThemeToolButton->setObjectName(QString::fromUtf8("CustomColorThemeToolButton"));
        CustomColorThemeToolButton->setMinimumSize(QSize(22, 22));
        CustomColorThemeToolButton->setMaximumSize(QSize(24, 24));
        CustomColorThemeToolButton->setFont(font1);
        CustomColorThemeToolButton->setFocusPolicy(Qt::TabFocus);

        gridLayout12->addWidget(CustomColorThemeToolButton, 0, 3, 1, 1);

        spacerItem19 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout12->addItem(spacerItem19, 0, 4, 1, 1);

        CustomStyleThemeTextLabel = new QLabel(DisplayCustomGroupBox);
        CustomStyleThemeTextLabel->setObjectName(QString::fromUtf8("CustomStyleThemeTextLabel"));
        CustomStyleThemeTextLabel->setFont(font1);

        gridLayout12->addWidget(CustomStyleThemeTextLabel, 0, 5, 1, 1);

        CustomStyleThemeComboBox = new QComboBox(DisplayCustomGroupBox);
        CustomStyleThemeComboBox->addItem(QString());
        CustomStyleThemeComboBox->setObjectName(QString::fromUtf8("CustomStyleThemeComboBox"));
        CustomStyleThemeComboBox->setFont(font1);
        CustomStyleThemeComboBox->setEditable(false);

        gridLayout12->addWidget(CustomStyleThemeComboBox, 0, 6, 1, 1);


        vboxLayout4->addWidget(DisplayCustomGroupBox);

        spacerItem20 = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout4->addItem(spacerItem20);

        DisplayMetersGroupBox = new QGroupBox(DisplayTabPage);
        DisplayMetersGroupBox->setObjectName(QString::fromUtf8("DisplayMetersGroupBox"));
        DisplayMetersGroupBox->setFont(font);
        DisplayMetersGroupBox->setFlat(true);
        gridLayout13 = new QGridLayout(DisplayMetersGroupBox);
        gridLayout13->setSpacing(4);
        gridLayout13->setContentsMargins(8, 8, 8, 8);
        gridLayout13->setObjectName(QString::fromUtf8("gridLayout13"));
        AudioMeterLevelTextLabel = new QLabel(DisplayMetersGroupBox);
        AudioMeterLevelTextLabel->setObjectName(QString::fromUtf8("AudioMeterLevelTextLabel"));
        AudioMeterLevelTextLabel->setFont(font1);

        gridLayout13->addWidget(AudioMeterLevelTextLabel, 0, 0, 1, 1);

        AudioMeterLevelComboBox = new QComboBox(DisplayMetersGroupBox);
        AudioMeterLevelComboBox->addItem(QString());
        AudioMeterLevelComboBox->addItem(QString());
        AudioMeterLevelComboBox->addItem(QString());
        AudioMeterLevelComboBox->addItem(QString());
        AudioMeterLevelComboBox->addItem(QString());
        AudioMeterLevelComboBox->addItem(QString());
        AudioMeterLevelComboBox->setObjectName(QString::fromUtf8("AudioMeterLevelComboBox"));
        AudioMeterLevelComboBox->setMinimumSize(QSize(66, 0));
        AudioMeterLevelComboBox->setFont(font1);

        gridLayout13->addWidget(AudioMeterLevelComboBox, 0, 1, 1, 1);

        AudioMeterColorLineEdit = new QLineEdit(DisplayMetersGroupBox);
        AudioMeterColorLineEdit->setObjectName(QString::fromUtf8("AudioMeterColorLineEdit"));
        AudioMeterColorLineEdit->setMaximumSize(QSize(66, 24));
        AudioMeterColorLineEdit->setFont(font1);

        gridLayout13->addWidget(AudioMeterColorLineEdit, 0, 2, 1, 1);

        AudioMeterColorToolButton = new QToolButton(DisplayMetersGroupBox);
        AudioMeterColorToolButton->setObjectName(QString::fromUtf8("AudioMeterColorToolButton"));
        AudioMeterColorToolButton->setMinimumSize(QSize(22, 22));
        AudioMeterColorToolButton->setMaximumSize(QSize(24, 24));
        AudioMeterColorToolButton->setFont(font1);
        AudioMeterColorToolButton->setFocusPolicy(Qt::TabFocus);
        const QIcon icon6 = QIcon(QString::fromUtf8(":/images/formColor.png"));
        AudioMeterColorToolButton->setIcon(icon6);

        gridLayout13->addWidget(AudioMeterColorToolButton, 0, 3, 1, 1);

        spacerItem21 = new QSpacerItem(4, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout13->addItem(spacerItem21, 0, 4, 1, 1);

        MidiMeterLevelTextLabel = new QLabel(DisplayMetersGroupBox);
        MidiMeterLevelTextLabel->setObjectName(QString::fromUtf8("MidiMeterLevelTextLabel"));
        MidiMeterLevelTextLabel->setFont(font1);
        MidiMeterLevelTextLabel->setAlignment(Qt::AlignRight|Qt::AlignVCenter);

        gridLayout13->addWidget(MidiMeterLevelTextLabel, 0, 5, 1, 1);

        MidiMeterLevelComboBox = new QComboBox(DisplayMetersGroupBox);
        MidiMeterLevelComboBox->addItem(QString());
        MidiMeterLevelComboBox->addItem(QString());
        MidiMeterLevelComboBox->addItem(QString());
        MidiMeterLevelComboBox->setObjectName(QString::fromUtf8("MidiMeterLevelComboBox"));
        MidiMeterLevelComboBox->setMinimumSize(QSize(66, 0));
        MidiMeterLevelComboBox->setFont(font1);

        gridLayout13->addWidget(MidiMeterLevelComboBox, 0, 6, 1, 1);

        MidiMeterColorLineEdit = new QLineEdit(DisplayMetersGroupBox);
        MidiMeterColorLineEdit->setObjectName(QString::fromUtf8("MidiMeterColorLineEdit"));
        MidiMeterColorLineEdit->setMaximumSize(QSize(66, 24));
        MidiMeterColorLineEdit->setFont(font1);

        gridLayout13->addWidget(MidiMeterColorLineEdit, 0, 7, 1, 1);

        MidiMeterColorToolButton = new QToolButton(DisplayMetersGroupBox);
        MidiMeterColorToolButton->setObjectName(QString::fromUtf8("MidiMeterColorToolButton"));
        MidiMeterColorToolButton->setMinimumSize(QSize(22, 22));
        MidiMeterColorToolButton->setMaximumSize(QSize(24, 24));
        MidiMeterColorToolButton->setFont(font1);
        MidiMeterColorToolButton->setFocusPolicy(Qt::TabFocus);
        MidiMeterColorToolButton->setIcon(icon6);

        gridLayout13->addWidget(MidiMeterColorToolButton, 0, 8, 1, 1);

        spacerItem22 = new QSpacerItem(4, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout13->addItem(spacerItem22, 0, 9, 1, 1);

        ResetMeterColorsPushButton = new QPushButton(DisplayMetersGroupBox);
        ResetMeterColorsPushButton->setObjectName(QString::fromUtf8("ResetMeterColorsPushButton"));
        ResetMeterColorsPushButton->setFont(font1);
        ResetMeterColorsPushButton->setAutoDefault(false);

        gridLayout13->addWidget(ResetMeterColorsPushButton, 0, 10, 1, 1);

        spacerItem23 = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout13->addItem(spacerItem23, 1, 0, 1, 11);


        vboxLayout4->addWidget(DisplayMetersGroupBox);

        DisplayMessagesGroupBox = new QGroupBox(DisplayTabPage);
        DisplayMessagesGroupBox->setObjectName(QString::fromUtf8("DisplayMessagesGroupBox"));
        DisplayMessagesGroupBox->setFont(font);
        DisplayMessagesGroupBox->setFlat(true);
        gridLayout14 = new QGridLayout(DisplayMessagesGroupBox);
        gridLayout14->setSpacing(4);
        gridLayout14->setContentsMargins(8, 8, 8, 8);
        gridLayout14->setObjectName(QString::fromUtf8("gridLayout14"));
        MessagesFontTextLabel = new QLabel(DisplayMessagesGroupBox);
        MessagesFontTextLabel->setObjectName(QString::fromUtf8("MessagesFontTextLabel"));
        MessagesFontTextLabel->setMinimumSize(QSize(180, 0));
        MessagesFontTextLabel->setMaximumSize(QSize(180, 32767));
        MessagesFontTextLabel->setFont(font1);
        MessagesFontTextLabel->setAutoFillBackground(true);
        MessagesFontTextLabel->setFrameShape(QFrame::StyledPanel);
        MessagesFontTextLabel->setFrameShadow(QFrame::Sunken);
        MessagesFontTextLabel->setAlignment(Qt::AlignCenter);

        gridLayout14->addWidget(MessagesFontTextLabel, 0, 0, 1, 1);

        MessagesFontPushButton = new QPushButton(DisplayMessagesGroupBox);
        MessagesFontPushButton->setObjectName(QString::fromUtf8("MessagesFontPushButton"));
        MessagesFontPushButton->setFont(font1);
        MessagesFontPushButton->setAutoDefault(false);

        gridLayout14->addWidget(MessagesFontPushButton, 0, 1, 1, 1);

        spacerItem24 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout14->addItem(spacerItem24, 0, 2, 1, 1);

        MessagesLimitCheckBox = new QCheckBox(DisplayMessagesGroupBox);
        MessagesLimitCheckBox->setObjectName(QString::fromUtf8("MessagesLimitCheckBox"));
        MessagesLimitCheckBox->setFont(font1);

        gridLayout14->addWidget(MessagesLimitCheckBox, 0, 3, 1, 1);

        MessagesLimitLinesSpinBox = new QSpinBox(DisplayMessagesGroupBox);
        MessagesLimitLinesSpinBox->setObjectName(QString::fromUtf8("MessagesLimitLinesSpinBox"));
        MessagesLimitLinesSpinBox->setFont(font1);
        MessagesLimitLinesSpinBox->setMinimum(100);
        MessagesLimitLinesSpinBox->setMaximum(10000);
        MessagesLimitLinesSpinBox->setSingleStep(100);
        MessagesLimitLinesSpinBox->setValue(1000);

        gridLayout14->addWidget(MessagesLimitLinesSpinBox, 0, 4, 1, 1);


        vboxLayout4->addWidget(DisplayMessagesGroupBox);

        DisplayLoggingGroupBox = new QGroupBox(DisplayTabPage);
        DisplayLoggingGroupBox->setObjectName(QString::fromUtf8("DisplayLoggingGroupBox"));
        DisplayLoggingGroupBox->setFont(font);
        DisplayLoggingGroupBox->setFlat(true);
        gridLayout15 = new QGridLayout(DisplayLoggingGroupBox);
        gridLayout15->setSpacing(4);
        gridLayout15->setContentsMargins(8, 8, 8, 8);
        gridLayout15->setObjectName(QString::fromUtf8("gridLayout15"));
        MessagesLogPathComboBox = new QComboBox(DisplayLoggingGroupBox);
        MessagesLogPathComboBox->setObjectName(QString::fromUtf8("MessagesLogPathComboBox"));
        sizePolicy.setHeightForWidth(MessagesLogPathComboBox->sizePolicy().hasHeightForWidth());
        MessagesLogPathComboBox->setSizePolicy(sizePolicy);
        MessagesLogPathComboBox->setMinimumSize(QSize(320, 0));
        MessagesLogPathComboBox->setFont(font1);
        MessagesLogPathComboBox->setEditable(true);

        gridLayout15->addWidget(MessagesLogPathComboBox, 0, 1, 1, 3);

        MessagesLogPathToolButton = new QToolButton(DisplayLoggingGroupBox);
        MessagesLogPathToolButton->setObjectName(QString::fromUtf8("MessagesLogPathToolButton"));
        MessagesLogPathToolButton->setMinimumSize(QSize(22, 22));
        MessagesLogPathToolButton->setMaximumSize(QSize(24, 24));
        MessagesLogPathToolButton->setFont(font1);
        MessagesLogPathToolButton->setFocusPolicy(Qt::TabFocus);
        MessagesLogPathToolButton->setIcon(icon1);

        gridLayout15->addWidget(MessagesLogPathToolButton, 0, 4, 1, 1);

        MessagesLogCheckBox = new QCheckBox(DisplayLoggingGroupBox);
        MessagesLogCheckBox->setObjectName(QString::fromUtf8("MessagesLogCheckBox"));
        MessagesLogCheckBox->setFont(font1);

        gridLayout15->addWidget(MessagesLogCheckBox, 0, 0, 1, 1);


        vboxLayout4->addWidget(DisplayLoggingGroupBox);

        OptionsTabWidget->addTab(DisplayTabPage, QString());
        PluginsTabPage = new QWidget();
        PluginsTabPage->setObjectName(QString::fromUtf8("PluginsTabPage"));
        vboxLayout5 = new QVBoxLayout(PluginsTabPage);
        vboxLayout5->setSpacing(4);
        vboxLayout5->setContentsMargins(8, 8, 8, 8);
        vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
        PluginsPathsGroupBox = new QGroupBox(PluginsTabPage);
        PluginsPathsGroupBox->setObjectName(QString::fromUtf8("PluginsPathsGroupBox"));
        PluginsPathsGroupBox->setFont(font);
        PluginsPathsGroupBox->setFlat(true);
        gridLayout16 = new QGridLayout(PluginsPathsGroupBox);
        gridLayout16->setSpacing(4);
        gridLayout16->setContentsMargins(8, 8, 8, 8);
        gridLayout16->setObjectName(QString::fromUtf8("gridLayout16"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(4);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        PluginTypeComboBox = new QComboBox(PluginsPathsGroupBox);
        PluginTypeComboBox->setObjectName(QString::fromUtf8("PluginTypeComboBox"));
        PluginTypeComboBox->setMaximumSize(QSize(80, 16777215));
        PluginTypeComboBox->setFont(font1);

        hboxLayout->addWidget(PluginTypeComboBox);

        PluginPathComboBox = new QComboBox(PluginsPathsGroupBox);
        PluginPathComboBox->setObjectName(QString::fromUtf8("PluginPathComboBox"));
        PluginPathComboBox->setMinimumSize(QSize(320, 0));
        PluginPathComboBox->setFont(font1);
        PluginPathComboBox->setEditable(true);

        hboxLayout->addWidget(PluginPathComboBox);

        PluginPathToolButton = new QToolButton(PluginsPathsGroupBox);
        PluginPathToolButton->setObjectName(QString::fromUtf8("PluginPathToolButton"));
        PluginPathToolButton->setMinimumSize(QSize(22, 22));
        PluginPathToolButton->setMaximumSize(QSize(24, 24));
        PluginPathToolButton->setFont(font1);
        PluginPathToolButton->setIcon(icon1);

        hboxLayout->addWidget(PluginPathToolButton);

        PluginPathAddToolButton = new QToolButton(PluginsPathsGroupBox);
        PluginPathAddToolButton->setObjectName(QString::fromUtf8("PluginPathAddToolButton"));
        PluginPathAddToolButton->setMinimumSize(QSize(66, 22));
        PluginPathAddToolButton->setMaximumSize(QSize(60, 24));
        PluginPathAddToolButton->setFont(font1);
        PluginPathAddToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        hboxLayout->addWidget(PluginPathAddToolButton);


        gridLayout16->addLayout(hboxLayout, 0, 0, 1, 2);

        PluginPathListWidget = new QListWidget(PluginsPathsGroupBox);
        PluginPathListWidget->setObjectName(QString::fromUtf8("PluginPathListWidget"));
        PluginPathListWidget->setMaximumSize(QSize(32767, 72));
        PluginPathListWidget->setFont(font1);
        PluginPathListWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        PluginPathListWidget->setUniformItemSizes(true);

        gridLayout16->addWidget(PluginPathListWidget, 1, 0, 3, 1);

        PluginPathRemoveToolButton = new QToolButton(PluginsPathsGroupBox);
        PluginPathRemoveToolButton->setObjectName(QString::fromUtf8("PluginPathRemoveToolButton"));
        PluginPathRemoveToolButton->setMinimumSize(QSize(66, 22));
        PluginPathRemoveToolButton->setMaximumSize(QSize(60, 24));
        PluginPathRemoveToolButton->setFont(font1);
        PluginPathRemoveToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout16->addWidget(PluginPathRemoveToolButton, 1, 1, 1, 1);

        PluginPathUpToolButton = new QToolButton(PluginsPathsGroupBox);
        PluginPathUpToolButton->setObjectName(QString::fromUtf8("PluginPathUpToolButton"));
        PluginPathUpToolButton->setMinimumSize(QSize(66, 22));
        PluginPathUpToolButton->setMaximumSize(QSize(60, 24));
        PluginPathUpToolButton->setFont(font1);
        PluginPathUpToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout16->addWidget(PluginPathUpToolButton, 2, 1, 1, 1);

        PluginPathDownToolButton = new QToolButton(PluginsPathsGroupBox);
        PluginPathDownToolButton->setObjectName(QString::fromUtf8("PluginPathDownToolButton"));
        PluginPathDownToolButton->setMinimumSize(QSize(66, 22));
        PluginPathDownToolButton->setMaximumSize(QSize(60, 24));
        PluginPathDownToolButton->setFont(font1);
        PluginPathDownToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout16->addWidget(PluginPathDownToolButton, 3, 1, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(4);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        Lv2PresetDirLabel = new QLabel(PluginsPathsGroupBox);
        Lv2PresetDirLabel->setObjectName(QString::fromUtf8("Lv2PresetDirLabel"));
        Lv2PresetDirLabel->setFont(font1);

        hboxLayout1->addWidget(Lv2PresetDirLabel);

        Lv2PresetDirComboBox = new QComboBox(PluginsPathsGroupBox);
        Lv2PresetDirComboBox->setObjectName(QString::fromUtf8("Lv2PresetDirComboBox"));
        Lv2PresetDirComboBox->setMinimumSize(QSize(360, 0));
        sizePolicy.setHeightForWidth(Lv2PresetDirComboBox->sizePolicy().hasHeightForWidth());
        Lv2PresetDirComboBox->setSizePolicy(sizePolicy);
        Lv2PresetDirComboBox->setFont(font1);
        Lv2PresetDirComboBox->setEditable(true);

        hboxLayout1->addWidget(Lv2PresetDirComboBox);

        Lv2PresetDirToolButton = new QToolButton(PluginsPathsGroupBox);
        Lv2PresetDirToolButton->setObjectName(QString::fromUtf8("Lv2PresetDirToolButton"));
        Lv2PresetDirToolButton->setMinimumSize(QSize(22, 22));
        Lv2PresetDirToolButton->setMaximumSize(QSize(24, 24));
        Lv2PresetDirToolButton->setFont(font1);
        Lv2PresetDirToolButton->setIcon(icon1);

        hboxLayout1->addWidget(Lv2PresetDirToolButton);


        gridLayout16->addLayout(hboxLayout1, 4, 0, 1, 1);


        vboxLayout5->addWidget(PluginsPathsGroupBox);

        PluginsInstrumentsGroupBox = new QGroupBox(PluginsTabPage);
        PluginsInstrumentsGroupBox->setObjectName(QString::fromUtf8("PluginsInstrumentsGroupBox"));
        PluginsInstrumentsGroupBox->setFont(font);
        PluginsInstrumentsGroupBox->setFlat(true);
        gridLayout17 = new QGridLayout(PluginsInstrumentsGroupBox);
        gridLayout17->setSpacing(4);
        gridLayout17->setContentsMargins(8, 8, 8, 8);
        gridLayout17->setObjectName(QString::fromUtf8("gridLayout17"));
        AudioOutputBusCheckBox = new QCheckBox(PluginsInstrumentsGroupBox);
        AudioOutputBusCheckBox->setObjectName(QString::fromUtf8("AudioOutputBusCheckBox"));
        AudioOutputBusCheckBox->setFont(font1);

        gridLayout17->addWidget(AudioOutputBusCheckBox, 0, 0, 1, 1);

        AudioOutputAutoConnectCheckBox = new QCheckBox(PluginsInstrumentsGroupBox);
        AudioOutputAutoConnectCheckBox->setObjectName(QString::fromUtf8("AudioOutputAutoConnectCheckBox"));
        AudioOutputAutoConnectCheckBox->setFont(font1);

        gridLayout17->addWidget(AudioOutputAutoConnectCheckBox, 0, 1, 1, 1);

        spacerItem25 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout17->addItem(spacerItem25, 0, 2, 2, 1);


        vboxLayout5->addWidget(PluginsInstrumentsGroupBox);

        PluginsEditorGroupBox = new QGroupBox(PluginsTabPage);
        PluginsEditorGroupBox->setObjectName(QString::fromUtf8("PluginsEditorGroupBox"));
        PluginsEditorGroupBox->setFont(font);
        PluginsEditorGroupBox->setFlat(true);
        gridLayout18 = new QGridLayout(PluginsEditorGroupBox);
        gridLayout18->setSpacing(4);
        gridLayout18->setContentsMargins(8, 8, 8, 8);
        gridLayout18->setObjectName(QString::fromUtf8("gridLayout18"));
        OpenEditorCheckBox = new QCheckBox(PluginsEditorGroupBox);
        OpenEditorCheckBox->setObjectName(QString::fromUtf8("OpenEditorCheckBox"));
        OpenEditorCheckBox->setFont(font1);

        gridLayout18->addWidget(OpenEditorCheckBox, 0, 0, 1, 3);

        QueryEditorTypeCheckBox = new QCheckBox(PluginsEditorGroupBox);
        QueryEditorTypeCheckBox->setObjectName(QString::fromUtf8("QueryEditorTypeCheckBox"));
        QueryEditorTypeCheckBox->setFont(font1);

        gridLayout18->addWidget(QueryEditorTypeCheckBox, 1, 0, 1, 3);


        vboxLayout5->addWidget(PluginsEditorGroupBox);

        spacerItem26 = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout5->addItem(spacerItem26);

        PluginsBlacklistGroupBox = new QGroupBox(PluginsTabPage);
        PluginsBlacklistGroupBox->setObjectName(QString::fromUtf8("PluginsBlacklistGroupBox"));
        PluginsBlacklistGroupBox->setFont(font);
        PluginsBlacklistGroupBox->setFlat(true);
        gridLayout19 = new QGridLayout(PluginsBlacklistGroupBox);
        gridLayout19->setSpacing(4);
        gridLayout19->setContentsMargins(8, 8, 8, 8);
        gridLayout19->setObjectName(QString::fromUtf8("gridLayout19"));
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(4);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        PluginBlacklistComboBox = new QComboBox(PluginsBlacklistGroupBox);
        PluginBlacklistComboBox->setObjectName(QString::fromUtf8("PluginBlacklistComboBox"));
        PluginBlacklistComboBox->setMinimumSize(QSize(320, 0));
        PluginBlacklistComboBox->setFont(font1);
        PluginBlacklistComboBox->setEditable(true);

        hboxLayout2->addWidget(PluginBlacklistComboBox);

        PluginBlacklistToolButton = new QToolButton(PluginsBlacklistGroupBox);
        PluginBlacklistToolButton->setObjectName(QString::fromUtf8("PluginBlacklistToolButton"));
        PluginBlacklistToolButton->setMinimumSize(QSize(22, 22));
        PluginBlacklistToolButton->setMaximumSize(QSize(24, 24));
        PluginBlacklistToolButton->setFont(font1);
        PluginBlacklistToolButton->setIcon(icon1);

        hboxLayout2->addWidget(PluginBlacklistToolButton);

        PluginBlacklistAddToolButton = new QToolButton(PluginsBlacklistGroupBox);
        PluginBlacklistAddToolButton->setObjectName(QString::fromUtf8("PluginBlacklistAddToolButton"));
        PluginBlacklistAddToolButton->setMinimumSize(QSize(66, 22));
        PluginBlacklistAddToolButton->setMaximumSize(QSize(60, 24));
        PluginBlacklistAddToolButton->setFont(font1);
        PluginBlacklistAddToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        hboxLayout2->addWidget(PluginBlacklistAddToolButton);


        gridLayout19->addLayout(hboxLayout2, 0, 0, 1, 2);

        PluginBlacklistWidget = new QListWidget(PluginsBlacklistGroupBox);
        PluginBlacklistWidget->setObjectName(QString::fromUtf8("PluginBlacklistWidget"));
        PluginBlacklistWidget->setMaximumSize(QSize(32767, 72));
        PluginBlacklistWidget->setFont(font1);
        PluginBlacklistWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        PluginBlacklistWidget->setUniformItemSizes(true);

        gridLayout19->addWidget(PluginBlacklistWidget, 1, 0, 3, 1);

        PluginBlacklistRemoveToolButton = new QToolButton(PluginsBlacklistGroupBox);
        PluginBlacklistRemoveToolButton->setObjectName(QString::fromUtf8("PluginBlacklistRemoveToolButton"));
        PluginBlacklistRemoveToolButton->setMinimumSize(QSize(66, 22));
        PluginBlacklistRemoveToolButton->setMaximumSize(QSize(60, 24));
        PluginBlacklistRemoveToolButton->setFont(font1);
        PluginBlacklistRemoveToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout19->addWidget(PluginBlacklistRemoveToolButton, 1, 1, 1, 1);

        spacerItem27 = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout19->addItem(spacerItem27, 2, 1, 1, 1);

        PluginBlacklistClearToolButton = new QToolButton(PluginsBlacklistGroupBox);
        PluginBlacklistClearToolButton->setObjectName(QString::fromUtf8("PluginBlacklistClearToolButton"));
        PluginBlacklistClearToolButton->setMinimumSize(QSize(66, 22));
        PluginBlacklistClearToolButton->setMaximumSize(QSize(60, 24));
        PluginBlacklistClearToolButton->setFont(font1);
        PluginBlacklistClearToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout19->addWidget(PluginBlacklistClearToolButton, 3, 1, 1, 1);


        vboxLayout5->addWidget(PluginsBlacklistGroupBox);

        OptionsTabWidget->addTab(PluginsTabPage, QString());

        vboxLayout->addWidget(OptionsTabWidget);

        DialogButtonBox = new QDialogButtonBox(qtractorOptionsForm);
        DialogButtonBox->setObjectName(QString::fromUtf8("DialogButtonBox"));
        DialogButtonBox->setOrientation(Qt::Horizontal);
        DialogButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(DialogButtonBox);

#if QT_CONFIG(shortcut)
        SessionFormatTextLabel->setBuddy(TransportModeComboBox);
        MaxRecentFilesTextLabel->setBuddy(MaxRecentFilesSpinBox);
        TransportModeTextLabel->setBuddy(TransportModeComboBox);
        LoopRecordingModeTextLabel->setBuddy(LoopRecordingModeComboBox);
        AudioCaptureTypeTextLabel->setBuddy(AudioCaptureTypeComboBox);
        AudioCaptureFormatTextLabel->setBuddy(AudioCaptureFormatComboBox);
        AudioCaptureQualityTextLabel->setBuddy(AudioCaptureQualitySpinBox);
        AudioResampleTypeTextLabel->setBuddy(AudioResampleTypeComboBox);
        AudioCountInModeLabel->setBuddy(AudioCountInModeComboBox);
        MetroBarFilenameTextLabel->setBuddy(MetroBarFilenameComboBox);
        MetroBarGainTextLabel->setBuddy(MetroBarGainSpinBox);
        MetroBeatFilenameTextLabel->setBuddy(MetroBeatFilenameComboBox);
        MetroBeatGainTextLabel->setBuddy(MetroBeatGainSpinBox);
        AudioMetroOffsetTextLabel->setBuddy(AudioMetroOffsetSpinBox);
        MidiCaptureFormatTextLabel->setBuddy(MidiCaptureFormatComboBox);
        MidiCaptureQuantizeTextLabel->setBuddy(MidiCaptureQuantizeComboBox);
        MidiQueueTimerTextLabel->setBuddy(MidiQueueTimerComboBox);
        MidiMmcModeTextLabel->setBuddy(MidiMmcModeComboBox);
        MidiMmcDeviceTextLabel->setBuddy(MidiMmcDeviceComboBox);
        MidiSppModeTextLabel->setBuddy(MidiSppModeComboBox);
        MidiClockModeTextLabel->setBuddy(MidiClockModeComboBox);
        MidiCountInModeLabel->setBuddy(AudioCountInModeComboBox);
        MetroChannelTextLabel->setBuddy(MetroChannelSpinBox);
        MetroBarNoteTextLabel->setBuddy(MetroBarNoteComboBox);
        MetroBarVelocityTextLabel->setBuddy(MetroBarVelocitySpinBox);
        MetroBarDurationTextLabel->setBuddy(MetroBarDurationSpinBox);
        MetroBeatNoteTextLabel->setBuddy(MetroBeatNoteComboBox);
        MetroBeatVelocityTextLabel->setBuddy(MetroBeatVelocitySpinBox);
        MetroBeatDurationTextLabel->setBuddy(MetroBeatDurationSpinBox);
        MidiMetroOffsetTextLabel->setBuddy(AudioMetroOffsetSpinBox);
        DisplayFormatTextLabel->setBuddy(DisplayFormatComboBox);
        BaseFontSizeTextLabel->setBuddy(BaseFontSizeComboBox);
        TrackColorSaturationTextLabel->setBuddy(TrackColorSaturationSpinBox);
        CustomColorThemeTextLabel->setBuddy(CustomColorThemeComboBox);
        CustomStyleThemeTextLabel->setBuddy(CustomStyleThemeComboBox);
        AudioMeterLevelTextLabel->setBuddy(AudioMeterLevelComboBox);
        MidiMeterLevelTextLabel->setBuddy(MidiMeterLevelComboBox);
        Lv2PresetDirLabel->setBuddy(Lv2PresetDirComboBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(OptionsTabWidget, SessionFormatComboBox);
        QWidget::setTabOrder(SessionFormatComboBox, SessionTemplateCheckBox);
        QWidget::setTabOrder(SessionTemplateCheckBox, SessionTemplatePathComboBox);
        QWidget::setTabOrder(SessionTemplatePathComboBox, SessionTemplatePathToolButton);
        QWidget::setTabOrder(SessionTemplatePathToolButton, SessionBackupCheckBox);
        QWidget::setTabOrder(SessionBackupCheckBox, SessionBackupModeComboBox);
        QWidget::setTabOrder(SessionBackupModeComboBox, SessionAutoSaveCheckBox);
        QWidget::setTabOrder(SessionAutoSaveCheckBox, SessionAutoSaveSpinBox);
        QWidget::setTabOrder(SessionAutoSaveSpinBox, ConfirmRemoveCheckBox);
        QWidget::setTabOrder(ConfirmRemoveCheckBox, ConfirmArchiveCheckBox);
        QWidget::setTabOrder(ConfirmArchiveCheckBox, StdoutCaptureCheckBox);
        QWidget::setTabOrder(StdoutCaptureCheckBox, CompletePathCheckBox);
        QWidget::setTabOrder(CompletePathCheckBox, PeakAutoRemoveCheckBox);
        QWidget::setTabOrder(PeakAutoRemoveCheckBox, KeepToolsOnTopCheckBox);
        QWidget::setTabOrder(KeepToolsOnTopCheckBox, MaxRecentFilesSpinBox);
        QWidget::setTabOrder(MaxRecentFilesSpinBox, TrackViewDropSpanCheckBox);
        QWidget::setTabOrder(TrackViewDropSpanCheckBox, MidButtonModifierCheckBox);
        QWidget::setTabOrder(MidButtonModifierCheckBox, KeepEditorsOnTopCheckBox);
        QWidget::setTabOrder(KeepEditorsOnTopCheckBox, TransportModeComboBox);
        QWidget::setTabOrder(TransportModeComboBox, TimebaseCheckBox);
        QWidget::setTabOrder(TimebaseCheckBox, LoopRecordingModeComboBox);
        QWidget::setTabOrder(LoopRecordingModeComboBox, AudioCaptureTypeComboBox);
        QWidget::setTabOrder(AudioCaptureTypeComboBox, AudioCaptureFormatComboBox);
        QWidget::setTabOrder(AudioCaptureFormatComboBox, AudioCaptureQualitySpinBox);
        QWidget::setTabOrder(AudioCaptureQualitySpinBox, AudioAutoTimeStretchCheckBox);
        QWidget::setTabOrder(AudioAutoTimeStretchCheckBox, AudioWsolaTimeStretchCheckBox);
        QWidget::setTabOrder(AudioWsolaTimeStretchCheckBox, AudioWsolaQuickSeekCheckBox);
        QWidget::setTabOrder(AudioWsolaQuickSeekCheckBox, AudioPlayerBusCheckBox);
        QWidget::setTabOrder(AudioPlayerBusCheckBox, AudioPlayerAutoConnectCheckBox);
        QWidget::setTabOrder(AudioPlayerAutoConnectCheckBox, AudioResampleTypeComboBox);
        QWidget::setTabOrder(AudioResampleTypeComboBox, AudioMetronomeCheckBox);
        QWidget::setTabOrder(AudioMetronomeCheckBox, MetroBarFilenameComboBox);
        QWidget::setTabOrder(MetroBarFilenameComboBox, MetroBarFilenameToolButton);
        QWidget::setTabOrder(MetroBarFilenameToolButton, MetroBarGainSpinBox);
        QWidget::setTabOrder(MetroBarGainSpinBox, MetroBeatFilenameComboBox);
        QWidget::setTabOrder(MetroBeatFilenameComboBox, MetroBeatFilenameToolButton);
        QWidget::setTabOrder(MetroBeatFilenameToolButton, MetroBeatGainSpinBox);
        QWidget::setTabOrder(MetroBeatGainSpinBox, AudioMetroBusCheckBox);
        QWidget::setTabOrder(AudioMetroBusCheckBox, AudioMetroAutoConnectCheckBox);
        QWidget::setTabOrder(AudioMetroAutoConnectCheckBox, AudioMetroOffsetSpinBox);
        QWidget::setTabOrder(AudioMetroOffsetSpinBox, MidiCaptureFormatComboBox);
        QWidget::setTabOrder(MidiCaptureFormatComboBox, MidiCaptureQuantizeComboBox);
        QWidget::setTabOrder(MidiCaptureQuantizeComboBox, MidiQueueTimerComboBox);
        QWidget::setTabOrder(MidiQueueTimerComboBox, MidiDriftCorrectCheckBox);
        QWidget::setTabOrder(MidiDriftCorrectCheckBox, MidiPlayerBusCheckBox);
        QWidget::setTabOrder(MidiPlayerBusCheckBox, MidiResetAllControllersCheckBox);
        QWidget::setTabOrder(MidiResetAllControllersCheckBox, MidiMmcModeComboBox);
        QWidget::setTabOrder(MidiMmcModeComboBox, MidiMmcDeviceComboBox);
        QWidget::setTabOrder(MidiMmcDeviceComboBox, MidiSppModeComboBox);
        QWidget::setTabOrder(MidiSppModeComboBox, MidiClockModeComboBox);
        QWidget::setTabOrder(MidiClockModeComboBox, MidiControlBusCheckBox);
        QWidget::setTabOrder(MidiControlBusCheckBox, MidiMetronomeCheckBox);
        QWidget::setTabOrder(MidiMetronomeCheckBox, MetroChannelSpinBox);
        QWidget::setTabOrder(MetroChannelSpinBox, MetroBarNoteComboBox);
        QWidget::setTabOrder(MetroBarNoteComboBox, MetroBarVelocitySpinBox);
        QWidget::setTabOrder(MetroBarVelocitySpinBox, MetroBarDurationSpinBox);
        QWidget::setTabOrder(MetroBarDurationSpinBox, MetroBeatNoteComboBox);
        QWidget::setTabOrder(MetroBeatNoteComboBox, MetroBeatVelocitySpinBox);
        QWidget::setTabOrder(MetroBeatVelocitySpinBox, MetroBeatDurationSpinBox);
        QWidget::setTabOrder(MetroBeatDurationSpinBox, MidiMetroBusCheckBox);
        QWidget::setTabOrder(MidiMetroBusCheckBox, MidiMetroOffsetSpinBox);
        QWidget::setTabOrder(MidiMetroOffsetSpinBox, DisplayFormatComboBox);
        QWidget::setTabOrder(DisplayFormatComboBox, BaseFontSizeComboBox);
        QWidget::setTabOrder(BaseFontSizeComboBox, UseNativeDialogsCheckBox);
        QWidget::setTabOrder(UseNativeDialogsCheckBox, SyncViewHoldCheckBox);
        QWidget::setTabOrder(SyncViewHoldCheckBox, TrackColorSaturationSpinBox);
        QWidget::setTabOrder(TrackColorSaturationSpinBox, CustomColorThemeComboBox);
        QWidget::setTabOrder(CustomColorThemeComboBox, CustomColorThemeToolButton);
        QWidget::setTabOrder(CustomColorThemeToolButton, CustomStyleThemeComboBox);
        QWidget::setTabOrder(CustomStyleThemeComboBox, AudioMeterLevelComboBox);
        QWidget::setTabOrder(AudioMeterLevelComboBox, AudioMeterColorLineEdit);
        QWidget::setTabOrder(AudioMeterColorLineEdit, AudioMeterColorToolButton);
        QWidget::setTabOrder(AudioMeterColorToolButton, MidiMeterLevelComboBox);
        QWidget::setTabOrder(MidiMeterLevelComboBox, MidiMeterColorLineEdit);
        QWidget::setTabOrder(MidiMeterColorLineEdit, MidiMeterColorToolButton);
        QWidget::setTabOrder(MidiMeterColorToolButton, ResetMeterColorsPushButton);
        QWidget::setTabOrder(ResetMeterColorsPushButton, MessagesFontPushButton);
        QWidget::setTabOrder(MessagesFontPushButton, MessagesLimitCheckBox);
        QWidget::setTabOrder(MessagesLimitCheckBox, MessagesLimitLinesSpinBox);
        QWidget::setTabOrder(MessagesLimitLinesSpinBox, MessagesLogCheckBox);
        QWidget::setTabOrder(MessagesLogCheckBox, MessagesLogPathComboBox);
        QWidget::setTabOrder(MessagesLogPathComboBox, MessagesLogPathToolButton);
        QWidget::setTabOrder(MessagesLogPathToolButton, PluginTypeComboBox);
        QWidget::setTabOrder(PluginTypeComboBox, PluginPathComboBox);
        QWidget::setTabOrder(PluginPathComboBox, PluginPathToolButton);
        QWidget::setTabOrder(PluginPathToolButton, PluginPathAddToolButton);
        QWidget::setTabOrder(PluginPathAddToolButton, PluginPathListWidget);
        QWidget::setTabOrder(PluginPathListWidget, PluginPathRemoveToolButton);
        QWidget::setTabOrder(PluginPathRemoveToolButton, PluginPathUpToolButton);
        QWidget::setTabOrder(PluginPathUpToolButton, PluginPathDownToolButton);
        QWidget::setTabOrder(PluginPathDownToolButton, Lv2PresetDirComboBox);
        QWidget::setTabOrder(Lv2PresetDirComboBox, Lv2PresetDirToolButton);
        QWidget::setTabOrder(Lv2PresetDirToolButton, AudioOutputBusCheckBox);
        QWidget::setTabOrder(AudioOutputBusCheckBox, AudioOutputAutoConnectCheckBox);
        QWidget::setTabOrder(AudioOutputAutoConnectCheckBox, OpenEditorCheckBox);
        QWidget::setTabOrder(OpenEditorCheckBox, QueryEditorTypeCheckBox);
        QWidget::setTabOrder(QueryEditorTypeCheckBox, PluginBlacklistComboBox);
        QWidget::setTabOrder(PluginBlacklistComboBox, PluginBlacklistToolButton);
        QWidget::setTabOrder(PluginBlacklistToolButton, PluginBlacklistAddToolButton);
        QWidget::setTabOrder(PluginBlacklistAddToolButton, PluginBlacklistWidget);
        QWidget::setTabOrder(PluginBlacklistWidget, PluginBlacklistRemoveToolButton);
        QWidget::setTabOrder(PluginBlacklistRemoveToolButton, PluginBlacklistClearToolButton);
        QWidget::setTabOrder(PluginBlacklistClearToolButton, DialogButtonBox);

        retranslateUi(qtractorOptionsForm);

        OptionsTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(qtractorOptionsForm);
    } // setupUi

    void retranslateUi(QDialog *qtractorOptionsForm)
    {
        qtractorOptionsForm->setWindowTitle(QCoreApplication::translate("qtractorOptionsForm", "Options", nullptr));
        GeneralSessionGroupBox->setTitle(QCoreApplication::translate("qtractorOptionsForm", "Session", nullptr));
        SessionFormatTextLabel->setText(QCoreApplication::translate("qtractorOptionsForm", "Default session &file format:", nullptr));
#if QT_CONFIG(tooltip)
        SessionFormatComboBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Default session file format (suffix)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        SessionTemplateCheckBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Whether to create new sessions based on template", nullptr));
#endif // QT_CONFIG(tooltip)
        SessionTemplateCheckBox->setText(QCoreApplication::translate("qtractorOptionsForm", "&New session template:", nullptr));
#if QT_CONFIG(tooltip)
        SessionTemplatePathComboBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "New session template", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        SessionTemplatePathToolButton->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Browse for new session template", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        SessionBackupCheckBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Whether to save backup versions of existing sessions", nullptr));
#endif // QT_CONFIG(tooltip)
        SessionBackupCheckBox->setText(QCoreApplication::translate("qtractorOptionsForm", "Save &backup versions of existing sessions:", nullptr));
        SessionBackupModeComboBox->setItemText(0, QCoreApplication::translate("qtractorOptionsForm", "Increment previous version (default)", nullptr));
        SessionBackupModeComboBox->setItemText(1, QCoreApplication::translate("qtractorOptionsForm", "Increment current version", nullptr));

#if QT_CONFIG(tooltip)
        SessionBackupModeComboBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Which mode to rename existing session files", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        SessionAutoSaveCheckBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Whether to enable session auto-save (crash-recovery)", nullptr));
#endif // QT_CONFIG(tooltip)
        SessionAutoSaveCheckBox->setText(QCoreApplication::translate("qtractorOptionsForm", "Auto-save current working session every:", nullptr));
#if QT_CONFIG(tooltip)
        SessionAutoSaveSpinBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Auto-save period (minutes)", nullptr));
#endif // QT_CONFIG(tooltip)
        SessionAutoSaveSpinBox->setSuffix(QCoreApplication::translate("qtractorOptionsForm", " minutes", nullptr));
        GeneralOptionsGroupBox->setTitle(QCoreApplication::translate("qtractorOptionsForm", "Options", nullptr));
#if QT_CONFIG(tooltip)
        ConfirmRemoveCheckBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Whether to ask for confirmation on removal", nullptr));
#endif // QT_CONFIG(tooltip)
        ConfirmRemoveCheckBox->setText(QCoreApplication::translate("qtractorOptionsForm", "&Confirm removals", nullptr));
#if QT_CONFIG(tooltip)
        ConfirmArchiveCheckBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Whether to ask for confirmation on archive directory removal", nullptr));
#endif // QT_CONFIG(tooltip)
        ConfirmArchiveCheckBox->setText(QCoreApplication::translate("qtractorOptionsForm", "C&onfirm archive removals", nullptr));
        MaxRecentFilesTextLabel->setText(QCoreApplication::translate("qtractorOptionsForm", "Number of &recent files:", nullptr));
#if QT_CONFIG(tooltip)
        MaxRecentFilesSpinBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "The maximum number of recent files to keep in menu", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        StdoutCaptureCheckBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Whether to capture standard output (stdout/stderr) into messages window", nullptr));
#endif // QT_CONFIG(tooltip)
        StdoutCaptureCheckBox->setText(QCoreApplication::translate("qtractorOptionsForm", "Capture standard &output", nullptr));
#if QT_CONFIG(tooltip)
        CompletePathCheckBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Whether to show the complete directory path of loaded session files", nullptr));
#endif // QT_CONFIG(tooltip)
        CompletePathCheckBox->setText(QCoreApplication::translate("qtractorOptionsForm", "S&how complete path of session files", nullptr));
#if QT_CONFIG(tooltip)
        PeakAutoRemoveCheckBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Whether to remove audio peak files on session close", nullptr));
#endif // QT_CONFIG(tooltip)
        PeakAutoRemoveCheckBox->setText(QCoreApplication::translate("qtractorOptionsForm", "Auto-remove audio pea&k files", nullptr));
#if QT_CONFIG(tooltip)
        KeepToolsOnTopCheckBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Whether to keep all tool windows on top of the main window", nullptr));
#endif // QT_CONFIG(tooltip)
        KeepToolsOnTopCheckBox->setText(QCoreApplication::translate("qtractorOptionsForm", "Keep tool &windows always on top", nullptr));
#if QT_CONFIG(tooltip)
        TrackViewDropSpanCheckBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Whether to try dropping multiple audio files into the same track", nullptr));
#endif // QT_CONFIG(tooltip)
        TrackViewDropSpanCheckBox->setText(QCoreApplication::translate("qtractorOptionsForm", "&Drop multiple audio files into the same track", nullptr));
#if QT_CONFIG(tooltip)
        ShiftKeyModifierCheckBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Whether to reverse keyboard modifiers role on transport positioning (Shift/Ctrl)", nullptr));
#endif // QT_CONFIG(tooltip)
        ShiftKeyModifierCheckBox->setText(QCoreApplication::translate("qtractorOptionsForm", "Reverse &keyboard modifiers role (Shift/Ctrl)", nullptr));
#if QT_CONFIG(tooltip)
        MidButtonModifierCheckBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Whether to reverse mouse middle-button role on keyboard modifiers (Shift/Ctrl)", nullptr));
#endif // QT_CONFIG(tooltip)
        MidButtonModifierCheckBox->setText(QCoreApplication::translate("qtractorOptionsForm", "Re&verse middle-button modifier role (Shift/Ctrl)", nullptr));
#if QT_CONFIG(tooltip)
        KeepEditorsOnTopCheckBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Whether to keep all editor windows on top of the main window", nullptr));
#endif // QT_CONFIG(tooltip)
        KeepEditorsOnTopCheckBox->setText(QCoreApplication::translate("qtractorOptionsForm", "Keep &editor windows always on top", nullptr));
        GeneralTransportGroupBox->setTitle(QCoreApplication::translate("qtractorOptionsForm", "Transport", nullptr));
        TransportModeTextLabel->setText(QCoreApplication::translate("qtractorOptionsForm", "Transport &mode:", nullptr));
        TransportModeComboBox->setItemText(0, QCoreApplication::translate("qtractorOptionsForm", "None", nullptr));
        TransportModeComboBox->setItemText(1, QCoreApplication::translate("qtractorOptionsForm", "Slave", nullptr));
        TransportModeComboBox->setItemText(2, QCoreApplication::translate("qtractorOptionsForm", "Master", nullptr));
        TransportModeComboBox->setItemText(3, QCoreApplication::translate("qtractorOptionsForm", "Full", nullptr));

#if QT_CONFIG(tooltip)
        TransportModeComboBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Transport control mode (JACK)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        TimebaseCheckBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Whether to start as timebase master (JACK)", nullptr));
#endif // QT_CONFIG(tooltip)
        TimebaseCheckBox->setText(QCoreApplication::translate("qtractorOptionsForm", "&Timebase", nullptr));
        LoopRecordingModeTextLabel->setText(QCoreApplication::translate("qtractorOptionsForm", "&Loop recording mode (takes):", nullptr));
        LoopRecordingModeComboBox->setItemText(0, QCoreApplication::translate("qtractorOptionsForm", "None", nullptr));
        LoopRecordingModeComboBox->setItemText(1, QCoreApplication::translate("qtractorOptionsForm", "First", nullptr));
        LoopRecordingModeComboBox->setItemText(2, QCoreApplication::translate("qtractorOptionsForm", "Last", nullptr));

#if QT_CONFIG(tooltip)
        LoopRecordingModeComboBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Loop recording mode (takes)", nullptr));
#endif // QT_CONFIG(tooltip)
        OptionsTabWidget->setTabText(OptionsTabWidget->indexOf(GeneralTabPage), QCoreApplication::translate("qtractorOptionsForm", "&General", nullptr));
        AudioCaptureGroupBox->setTitle(QCoreApplication::translate("qtractorOptionsForm", "Capture / Export", nullptr));
        AudioCaptureTypeTextLabel->setText(QCoreApplication::translate("qtractorOptionsForm", "File &type:", nullptr));
#if QT_CONFIG(tooltip)
        AudioCaptureTypeComboBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Audio file type to use on capture (record) and export", nullptr));
#endif // QT_CONFIG(tooltip)
        AudioCaptureFormatTextLabel->setText(QCoreApplication::translate("qtractorOptionsForm", "Sample &format:", nullptr));
#if QT_CONFIG(tooltip)
        AudioCaptureFormatComboBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Audio sample format to use on capture (record) and export", nullptr));
#endif // QT_CONFIG(tooltip)
        AudioCaptureQualityTextLabel->setText(QCoreApplication::translate("qtractorOptionsForm", "&Quality:", nullptr));
#if QT_CONFIG(tooltip)
        AudioCaptureQualitySpinBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Audio compression quality to use on capture (record) and export", nullptr));
#endif // QT_CONFIG(tooltip)
        AudioCaptureQualitySpinBox->setSuffix(QString());
        AudioPlaybackGroupBox->setTitle(QCoreApplication::translate("qtractorOptionsForm", "Playback", nullptr));
#if QT_CONFIG(tooltip)
        AudioAutoTimeStretchCheckBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Whether to apply time-stretching when tempo changes", nullptr));
#endif // QT_CONFIG(tooltip)
        AudioAutoTimeStretchCheckBox->setText(QCoreApplication::translate("qtractorOptionsForm", "Aut&omatic time-stretching", nullptr));
        AudioResampleTypeTextLabel->setText(QCoreApplication::translate("qtractorOptionsForm", "Sample-&rate converter type:", nullptr));
        AudioResampleTypeComboBox->setItemText(0, QCoreApplication::translate("qtractorOptionsForm", "Sinc (Best Quality)", nullptr));
        AudioResampleTypeComboBox->setItemText(1, QCoreApplication::translate("qtractorOptionsForm", "Sinc (Medium Quality)", nullptr));
        AudioResampleTypeComboBox->setItemText(2, QCoreApplication::translate("qtractorOptionsForm", "Sinc (Fastest)", nullptr));
        AudioResampleTypeComboBox->setItemText(3, QCoreApplication::translate("qtractorOptionsForm", "Zero Order Hold", nullptr));
        AudioResampleTypeComboBox->setItemText(4, QCoreApplication::translate("qtractorOptionsForm", "Linear", nullptr));

#if QT_CONFIG(tooltip)
        AudioResampleTypeComboBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Sample-rate converter quality", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        AudioWsolaTimeStretchCheckBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Whether to use WSOLA time-stretching", nullptr));
#endif // QT_CONFIG(tooltip)
        AudioWsolaTimeStretchCheckBox->setText(QCoreApplication::translate("qtractorOptionsForm", "&WSOLA time-stretching", nullptr));
#if QT_CONFIG(tooltip)
        AudioWsolaQuickSeekCheckBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Whether to apply WSOLA quick seek time-stretching", nullptr));
#endif // QT_CONFIG(tooltip)
        AudioWsolaQuickSeekCheckBox->setText(QCoreApplication::translate("qtractorOptionsForm", "WSOLA quic&k seek", nullptr));
#if QT_CONFIG(tooltip)
        AudioPlayerBusCheckBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Whether to have separate audition/pre-listening player output ports", nullptr));
#endif // QT_CONFIG(tooltip)
        AudioPlayerBusCheckBox->setText(QCoreApplication::translate("qtractorOptionsForm", "Dedicated au&dition/pre-listening player outputs:", nullptr));
#if QT_CONFIG(tooltip)
        AudioPlayerAutoConnectCheckBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Whether to auto-connect dedicated audio player outputs", nullptr));
#endif // QT_CONFIG(tooltip)
        AudioPlayerAutoConnectCheckBox->setText(QCoreApplication::translate("qtractorOptionsForm", "Auto-&connect", nullptr));
        AudioMetronomeGroupBox->setTitle(QCoreApplication::translate("qtractorOptionsForm", "Metronome", nullptr));
#if QT_CONFIG(tooltip)
        AudioMetronomeCheckBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Whether to enable the audio metronome", nullptr));
#endif // QT_CONFIG(tooltip)
        AudioMetronomeCheckBox->setText(QCoreApplication::translate("qtractorOptionsForm", "&Enable audio metronome", nullptr));
        AudioCountInModeLabel->setText(QCoreApplication::translate("qtractorOptionsForm", "&Count-in:", nullptr));
        AudioCountInModeComboBox->setItemText(0, QCoreApplication::translate("qtractorOptionsForm", "None", nullptr));
        AudioCountInModeComboBox->setItemText(1, QCoreApplication::translate("qtractorOptionsForm", "Playback", nullptr));
        AudioCountInModeComboBox->setItemText(2, QCoreApplication::translate("qtractorOptionsForm", "Recording", nullptr));

#if QT_CONFIG(tooltip)
        AudioCountInModeComboBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Count-in mode", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        AudioCountInBeatsSpinBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Count-in number", nullptr));
#endif // QT_CONFIG(tooltip)
        AudioCountInBeatsSpinBox->setSuffix(QCoreApplication::translate("qtractorOptionsForm", " beats", nullptr));
        MetroBarFilenameTextLabel->setText(QCoreApplication::translate("qtractorOptionsForm", "&File (bar):", nullptr));
#if QT_CONFIG(tooltip)
        MetroBarFilenameComboBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Metronome Audio filename (bar)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        MetroBarFilenameToolButton->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Browse for sample audio file (bar)", nullptr));
#endif // QT_CONFIG(tooltip)
        MetroBarGainTextLabel->setText(QCoreApplication::translate("qtractorOptionsForm", "&Gain (bar):", nullptr));
#if QT_CONFIG(tooltip)
        MetroBarGainSpinBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Metronome gain (bar)", nullptr));
#endif // QT_CONFIG(tooltip)
        MetroBarGainSpinBox->setSuffix(QCoreApplication::translate("qtractorOptionsForm", " dB", nullptr));
        MetroBeatFilenameTextLabel->setText(QCoreApplication::translate("qtractorOptionsForm", "&File (beat):", nullptr));
#if QT_CONFIG(tooltip)
        MetroBeatFilenameComboBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Metronome Audio filename (beat)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        MetroBeatFilenameToolButton->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Browse for sample audio file (beat)", nullptr));
#endif // QT_CONFIG(tooltip)
        MetroBeatGainTextLabel->setText(QCoreApplication::translate("qtractorOptionsForm", "&Gain (beat):", nullptr));
#if QT_CONFIG(tooltip)
        MetroBeatGainSpinBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Metronome gain (beat)", nullptr));
#endif // QT_CONFIG(tooltip)
        MetroBeatGainSpinBox->setSuffix(QCoreApplication::translate("qtractorOptionsForm", " dB", nullptr));
#if QT_CONFIG(tooltip)
        AudioMetroBusCheckBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Whether to have separate audio metronome output ports", nullptr));
#endif // QT_CONFIG(tooltip)
        AudioMetroBusCheckBox->setText(QCoreApplication::translate("qtractorOptionsForm", "Dedicated a&udio metronome outputs:", nullptr));
#if QT_CONFIG(tooltip)
        AudioMetroAutoConnectCheckBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Whether to auto-connect dedicated audio metronome outputs", nullptr));
#endif // QT_CONFIG(tooltip)
        AudioMetroAutoConnectCheckBox->setText(QCoreApplication::translate("qtractorOptionsForm", "Auto-co&nnect", nullptr));
        AudioMetroOffsetTextLabel->setText(QCoreApplication::translate("qtractorOptionsForm", "&Offset (latency):", nullptr));
#if QT_CONFIG(tooltip)
        AudioMetroOffsetSpinBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Metronome Audio offset (latency)", nullptr));
#endif // QT_CONFIG(tooltip)
        OptionsTabWidget->setTabText(OptionsTabWidget->indexOf(AudioTabPage), QCoreApplication::translate("qtractorOptionsForm", "&Audio", nullptr));
        MidiCaptureGroupBox->setTitle(QCoreApplication::translate("qtractorOptionsForm", "Capture / Export", nullptr));
        MidiCaptureFormatTextLabel->setText(QCoreApplication::translate("qtractorOptionsForm", "File &format:", nullptr));
#if QT_CONFIG(tooltip)
        MidiCaptureFormatComboBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "MIDI file format to use on capture (record) and export", nullptr));
#endif // QT_CONFIG(tooltip)
        MidiCaptureQuantizeTextLabel->setText(QCoreApplication::translate("qtractorOptionsForm", "&Quantize:", nullptr));
#if QT_CONFIG(tooltip)
        MidiCaptureQuantizeComboBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "MIDI capture (record) quantization", nullptr));
#endif // QT_CONFIG(tooltip)
        MidiPlaybackGroupBox->setTitle(QCoreApplication::translate("qtractorOptionsForm", "Playback", nullptr));
        MidiQueueTimerTextLabel->setText(QCoreApplication::translate("qtractorOptionsForm", "Queue &timer (resolution):", nullptr));
#if QT_CONFIG(tooltip)
        MidiQueueTimerComboBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Queue timer (resolution)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        MidiDriftCorrectCheckBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Whether to enable MIDI queue time drift correction", nullptr));
#endif // QT_CONFIG(tooltip)
        MidiDriftCorrectCheckBox->setText(QCoreApplication::translate("qtractorOptionsForm", "E&nable MIDI queue time drift correction", nullptr));
#if QT_CONFIG(tooltip)
        MidiPlayerBusCheckBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Whether to have separate MIDI player output ports", nullptr));
#endif // QT_CONFIG(tooltip)
        MidiPlayerBusCheckBox->setText(QCoreApplication::translate("qtractorOptionsForm", "Dedicated MIDI p&layer outputs", nullptr));
#if QT_CONFIG(tooltip)
        MidiResetAllControllersCheckBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Whether to reset/resend all controllers on playback start", nullptr));
#endif // QT_CONFIG(tooltip)
        MidiResetAllControllersCheckBox->setText(QCoreApplication::translate("qtractorOptionsForm", "&Reset all controllers on playback start", nullptr));
        MidiControlGroupBox->setTitle(QCoreApplication::translate("qtractorOptionsForm", "Control", nullptr));
        MidiMmcModeTextLabel->setText(QCoreApplication::translate("qtractorOptionsForm", "&MMC:", nullptr));
        MidiMmcModeComboBox->setItemText(0, QCoreApplication::translate("qtractorOptionsForm", "None", nullptr));
        MidiMmcModeComboBox->setItemText(1, QCoreApplication::translate("qtractorOptionsForm", "Input", nullptr));
        MidiMmcModeComboBox->setItemText(2, QCoreApplication::translate("qtractorOptionsForm", "Output", nullptr));
        MidiMmcModeComboBox->setItemText(3, QCoreApplication::translate("qtractorOptionsForm", "Duplex", nullptr));

#if QT_CONFIG(tooltip)
        MidiMmcModeComboBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "MIDI Machine Control (MMC) mode", nullptr));
#endif // QT_CONFIG(tooltip)
        MidiMmcDeviceTextLabel->setText(QCoreApplication::translate("qtractorOptionsForm", "&Device:", nullptr));
#if QT_CONFIG(tooltip)
        MidiMmcDeviceComboBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "MIDI Machine Control (MMC) device id.", nullptr));
#endif // QT_CONFIG(tooltip)
        MidiSppModeTextLabel->setText(QCoreApplication::translate("qtractorOptionsForm", "&SPP:", nullptr));
        MidiSppModeComboBox->setItemText(0, QCoreApplication::translate("qtractorOptionsForm", "None", nullptr));
        MidiSppModeComboBox->setItemText(1, QCoreApplication::translate("qtractorOptionsForm", "Input", nullptr));
        MidiSppModeComboBox->setItemText(2, QCoreApplication::translate("qtractorOptionsForm", "Output", nullptr));
        MidiSppModeComboBox->setItemText(3, QCoreApplication::translate("qtractorOptionsForm", "Duplex", nullptr));

#if QT_CONFIG(tooltip)
        MidiSppModeComboBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "MIDI Song Position pointer (SPP) control mode", nullptr));
#endif // QT_CONFIG(tooltip)
        MidiClockModeTextLabel->setText(QCoreApplication::translate("qtractorOptionsForm", "MIDI Cloc&k:", nullptr));
        MidiClockModeComboBox->setItemText(0, QCoreApplication::translate("qtractorOptionsForm", "None", nullptr));
        MidiClockModeComboBox->setItemText(1, QCoreApplication::translate("qtractorOptionsForm", "Input", nullptr));
        MidiClockModeComboBox->setItemText(2, QCoreApplication::translate("qtractorOptionsForm", "Output", nullptr));
        MidiClockModeComboBox->setItemText(3, QCoreApplication::translate("qtractorOptionsForm", "Duplex", nullptr));

#if QT_CONFIG(tooltip)
        MidiClockModeComboBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "MIDI Clock control mode", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        MidiControlBusCheckBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Whether to have separate MIDI control ports", nullptr));
#endif // QT_CONFIG(tooltip)
        MidiControlBusCheckBox->setText(QCoreApplication::translate("qtractorOptionsForm", "Dedicated MIDI &control input/output", nullptr));
        MidiMetronomeGroupBox->setTitle(QCoreApplication::translate("qtractorOptionsForm", "Metronome", nullptr));
#if QT_CONFIG(tooltip)
        MidiMetronomeCheckBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Whether to enable the MIDI metronome", nullptr));
#endif // QT_CONFIG(tooltip)
        MidiMetronomeCheckBox->setText(QCoreApplication::translate("qtractorOptionsForm", "&Enable MIDI metronome", nullptr));
        MidiCountInModeLabel->setText(QCoreApplication::translate("qtractorOptionsForm", "&Count-in:", nullptr));
        MidiCountInModeComboBox->setItemText(0, QCoreApplication::translate("qtractorOptionsForm", "None", nullptr));
        MidiCountInModeComboBox->setItemText(1, QCoreApplication::translate("qtractorOptionsForm", "Playback", nullptr));
        MidiCountInModeComboBox->setItemText(2, QCoreApplication::translate("qtractorOptionsForm", "Recording", nullptr));

#if QT_CONFIG(tooltip)
        MidiCountInModeComboBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Count-in mode", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        MidiCountInBeatsSpinBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Count-in number", nullptr));
#endif // QT_CONFIG(tooltip)
        MidiCountInBeatsSpinBox->setSuffix(QCoreApplication::translate("qtractorOptionsForm", " beats", nullptr));
        MetroChannelTextLabel->setText(QCoreApplication::translate("qtractorOptionsForm", "&Channel:", nullptr));
#if QT_CONFIG(tooltip)
        MetroChannelSpinBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Metronome MIDI channel", nullptr));
#endif // QT_CONFIG(tooltip)
        MetroBarNoteTextLabel->setText(QCoreApplication::translate("qtractorOptionsForm", "&Note (bar):", nullptr));
#if QT_CONFIG(tooltip)
        MetroBarNoteComboBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Metronome MIDI note (bar)", nullptr));
#endif // QT_CONFIG(tooltip)
        MetroBarVelocityTextLabel->setText(QCoreApplication::translate("qtractorOptionsForm", "&Velocity (bar):", nullptr));
#if QT_CONFIG(tooltip)
        MetroBarVelocitySpinBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Metronome MIDI velocity (bar)", nullptr));
#endif // QT_CONFIG(tooltip)
        MetroBarDurationTextLabel->setText(QCoreApplication::translate("qtractorOptionsForm", "&Duration (bar):", nullptr));
#if QT_CONFIG(tooltip)
        MetroBarDurationSpinBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Metronome MIDI duration (bar)", nullptr));
#endif // QT_CONFIG(tooltip)
        MetroBeatNoteTextLabel->setText(QCoreApplication::translate("qtractorOptionsForm", "&Note (beat):", nullptr));
#if QT_CONFIG(tooltip)
        MetroBeatNoteComboBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Metronome MIDI note (beat)", nullptr));
#endif // QT_CONFIG(tooltip)
        MetroBeatVelocityTextLabel->setText(QCoreApplication::translate("qtractorOptionsForm", "&Velocity (beat):", nullptr));
#if QT_CONFIG(tooltip)
        MetroBeatVelocitySpinBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Metronome MIDI velocity (beat)", nullptr));
#endif // QT_CONFIG(tooltip)
        MetroBeatDurationTextLabel->setText(QCoreApplication::translate("qtractorOptionsForm", "&Duration (beat):", nullptr));
#if QT_CONFIG(tooltip)
        MetroBeatDurationSpinBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Metronome MIDI duration (beat)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        MidiMetroBusCheckBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Whether to have separate MIDI metronome output port", nullptr));
#endif // QT_CONFIG(tooltip)
        MidiMetroBusCheckBox->setText(QCoreApplication::translate("qtractorOptionsForm", "Dedicated M&IDI metronome output", nullptr));
        MidiMetroOffsetTextLabel->setText(QCoreApplication::translate("qtractorOptionsForm", "&Offset (latency):", nullptr));
#if QT_CONFIG(tooltip)
        MidiMetroOffsetSpinBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Metronome MIDI offset (latency)", nullptr));
#endif // QT_CONFIG(tooltip)
        OptionsTabWidget->setTabText(OptionsTabWidget->indexOf(MidiTabPage), QCoreApplication::translate("qtractorOptionsForm", "&MIDI", nullptr));
        DisplayDefaultsGroupBox->setTitle(QCoreApplication::translate("qtractorOptionsForm", "Defaults", nullptr));
        DisplayFormatTextLabel->setText(QCoreApplication::translate("qtractorOptionsForm", "&Time display format:", nullptr));
        DisplayFormatComboBox->setItemText(0, QCoreApplication::translate("qtractorOptionsForm", "Frames", nullptr));
        DisplayFormatComboBox->setItemText(1, QCoreApplication::translate("qtractorOptionsForm", "Time", nullptr));
        DisplayFormatComboBox->setItemText(2, QCoreApplication::translate("qtractorOptionsForm", "BBT", nullptr));

#if QT_CONFIG(tooltip)
        DisplayFormatComboBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Time display format", nullptr));
#endif // QT_CONFIG(tooltip)
        BaseFontSizeTextLabel->setText(QCoreApplication::translate("qtractorOptionsForm", "&Base font size:", nullptr));
        BaseFontSizeComboBox->setItemText(0, QCoreApplication::translate("qtractorOptionsForm", "(default)", nullptr));
        BaseFontSizeComboBox->setItemText(1, QCoreApplication::translate("qtractorOptionsForm", "6", nullptr));
        BaseFontSizeComboBox->setItemText(2, QCoreApplication::translate("qtractorOptionsForm", "7", nullptr));
        BaseFontSizeComboBox->setItemText(3, QCoreApplication::translate("qtractorOptionsForm", "8", nullptr));
        BaseFontSizeComboBox->setItemText(4, QCoreApplication::translate("qtractorOptionsForm", "9", nullptr));
        BaseFontSizeComboBox->setItemText(5, QCoreApplication::translate("qtractorOptionsForm", "10", nullptr));
        BaseFontSizeComboBox->setItemText(6, QCoreApplication::translate("qtractorOptionsForm", "11", nullptr));
        BaseFontSizeComboBox->setItemText(7, QCoreApplication::translate("qtractorOptionsForm", "12", nullptr));

#if QT_CONFIG(tooltip)
        BaseFontSizeComboBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Base application font size (pt.)", nullptr));
#endif // QT_CONFIG(tooltip)
        DisplayOptionsGroupBox->setTitle(QCoreApplication::translate("qtractorOptionsForm", "Options", nullptr));
#if QT_CONFIG(tooltip)
        UseNativeDialogsCheckBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Whether to use desktop environment native dialogs.", nullptr));
#endif // QT_CONFIG(tooltip)
        UseNativeDialogsCheckBox->setText(QCoreApplication::translate("qtractorOptionsForm", "Use desktop environment &native dialogs", nullptr));
#if QT_CONFIG(tooltip)
        SyncViewHoldCheckBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Whether to hold auto-scrolling (follow play-head) on edits.", nullptr));
#endif // QT_CONFIG(tooltip)
        SyncViewHoldCheckBox->setText(QCoreApplication::translate("qtractorOptionsForm", "&Hold auto-scrolling (follow play-head) on edits", nullptr));
        TrackColorSaturationTextLabel->setText(QCoreApplication::translate("qtractorOptionsForm", "Trac&k color saturation:", nullptr));
#if QT_CONFIG(tooltip)
        TrackColorSaturationSpinBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Default new track color saturation", nullptr));
#endif // QT_CONFIG(tooltip)
        TrackColorSaturationSpinBox->setSuffix(QCoreApplication::translate("qtractorOptionsForm", " %", nullptr));
        DisplayCustomGroupBox->setTitle(QCoreApplication::translate("qtractorOptionsForm", "Custom", nullptr));
        CustomColorThemeTextLabel->setText(QCoreApplication::translate("qtractorOptionsForm", "&Color theme:", nullptr));
        CustomColorThemeComboBox->setItemText(0, QCoreApplication::translate("qtractorOptionsForm", "(default)", nullptr));
        CustomColorThemeComboBox->setItemText(1, QCoreApplication::translate("qtractorOptionsForm", "Wonton Soup", nullptr));
        CustomColorThemeComboBox->setItemText(2, QCoreApplication::translate("qtractorOptionsForm", "KXStudio", nullptr));

#if QT_CONFIG(tooltip)
        CustomColorThemeComboBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Custom color palette theme", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        CustomColorThemeToolButton->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Manage custom color palette themes", nullptr));
#endif // QT_CONFIG(tooltip)
        CustomColorThemeToolButton->setText(QCoreApplication::translate("qtractorOptionsForm", "...", nullptr));
        CustomStyleThemeTextLabel->setText(QCoreApplication::translate("qtractorOptionsForm", "&Style theme:", nullptr));
        CustomStyleThemeComboBox->setItemText(0, QCoreApplication::translate("qtractorOptionsForm", "(default)", nullptr));

#if QT_CONFIG(tooltip)
        CustomStyleThemeComboBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Custom widget style theme", nullptr));
#endif // QT_CONFIG(tooltip)
        DisplayMetersGroupBox->setTitle(QCoreApplication::translate("qtractorOptionsForm", "Meters", nullptr));
        AudioMeterLevelTextLabel->setText(QCoreApplication::translate("qtractorOptionsForm", "&Audio:", nullptr));
        AudioMeterLevelComboBox->setItemText(0, QCoreApplication::translate("qtractorOptionsForm", "Over", nullptr));
        AudioMeterLevelComboBox->setItemText(1, QCoreApplication::translate("qtractorOptionsForm", "0 dB", nullptr));
        AudioMeterLevelComboBox->setItemText(2, QCoreApplication::translate("qtractorOptionsForm", "3 dB", nullptr));
        AudioMeterLevelComboBox->setItemText(3, QCoreApplication::translate("qtractorOptionsForm", "6 dB", nullptr));
        AudioMeterLevelComboBox->setItemText(4, QCoreApplication::translate("qtractorOptionsForm", "10 dB", nullptr));
        AudioMeterLevelComboBox->setItemText(5, QCoreApplication::translate("qtractorOptionsForm", "Back", nullptr));

#if QT_CONFIG(tooltip)
        AudioMeterLevelComboBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Audio meter level", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        AudioMeterColorLineEdit->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Audio meter color", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        AudioMeterColorToolButton->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Select custom audio meter color", nullptr));
#endif // QT_CONFIG(tooltip)
        AudioMeterColorToolButton->setText(QCoreApplication::translate("qtractorOptionsForm", "...", nullptr));
        MidiMeterLevelTextLabel->setText(QCoreApplication::translate("qtractorOptionsForm", "&MIDI:", nullptr));
        MidiMeterLevelComboBox->setItemText(0, QCoreApplication::translate("qtractorOptionsForm", "Peak", nullptr));
        MidiMeterLevelComboBox->setItemText(1, QCoreApplication::translate("qtractorOptionsForm", "Over", nullptr));
        MidiMeterLevelComboBox->setItemText(2, QCoreApplication::translate("qtractorOptionsForm", "Back", nullptr));

#if QT_CONFIG(tooltip)
        MidiMeterLevelComboBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "MIDI meter level", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        MidiMeterColorLineEdit->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "MIDI meter color", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        MidiMeterColorToolButton->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Select custom MIDI meter color", nullptr));
#endif // QT_CONFIG(tooltip)
        MidiMeterColorToolButton->setText(QCoreApplication::translate("qtractorOptionsForm", "...", nullptr));
#if QT_CONFIG(tooltip)
        ResetMeterColorsPushButton->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Reset meter colors to default", nullptr));
#endif // QT_CONFIG(tooltip)
        ResetMeterColorsPushButton->setText(QCoreApplication::translate("qtractorOptionsForm", "&Reset", nullptr));
        DisplayMessagesGroupBox->setTitle(QCoreApplication::translate("qtractorOptionsForm", "Messages", nullptr));
#if QT_CONFIG(tooltip)
        MessagesFontTextLabel->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Sample messages text font display", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        MessagesFontPushButton->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Select font for the messages text display", nullptr));
#endif // QT_CONFIG(tooltip)
        MessagesFontPushButton->setText(QCoreApplication::translate("qtractorOptionsForm", "&Font...", nullptr));
#if QT_CONFIG(tooltip)
        MessagesLimitCheckBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Whether to keep a maximum number of lines in the messages window", nullptr));
#endif // QT_CONFIG(tooltip)
        MessagesLimitCheckBox->setText(QCoreApplication::translate("qtractorOptionsForm", "M&essages limit:", nullptr));
#if QT_CONFIG(tooltip)
        MessagesLimitLinesSpinBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "The maximum number of message lines to keep in view", nullptr));
#endif // QT_CONFIG(tooltip)
        MessagesLimitLinesSpinBox->setSuffix(QCoreApplication::translate("qtractorOptionsForm", " lines", nullptr));
        DisplayLoggingGroupBox->setTitle(QCoreApplication::translate("qtractorOptionsForm", "Logging", nullptr));
#if QT_CONFIG(tooltip)
        MessagesLogPathComboBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Messages log file", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        MessagesLogPathToolButton->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Browse for the messages log file location", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        MessagesLogCheckBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Whether to activate a messages logging to file.", nullptr));
#endif // QT_CONFIG(tooltip)
        MessagesLogCheckBox->setText(QCoreApplication::translate("qtractorOptionsForm", "Messages &log file:", nullptr));
        OptionsTabWidget->setTabText(OptionsTabWidget->indexOf(DisplayTabPage), QCoreApplication::translate("qtractorOptionsForm", "&Display", nullptr));
        PluginsPathsGroupBox->setTitle(QCoreApplication::translate("qtractorOptionsForm", "Paths", nullptr));
#if QT_CONFIG(tooltip)
        PluginTypeComboBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Plugin type", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        PluginPathComboBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Plugin path", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        PluginPathToolButton->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Browse plugin path", nullptr));
#endif // QT_CONFIG(tooltip)
        PluginPathToolButton->setText(QCoreApplication::translate("qtractorOptionsForm", "...", nullptr));
#if QT_CONFIG(tooltip)
        PluginPathAddToolButton->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Add plugin path", nullptr));
#endif // QT_CONFIG(tooltip)
        PluginPathAddToolButton->setText(QCoreApplication::translate("qtractorOptionsForm", "&Add", nullptr));
#if QT_CONFIG(statustip)
        PluginPathListWidget->setStatusTip(QCoreApplication::translate("qtractorOptionsForm", "Plugin paths", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        PluginPathRemoveToolButton->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Remove plugin path", nullptr));
#endif // QT_CONFIG(tooltip)
        PluginPathRemoveToolButton->setText(QCoreApplication::translate("qtractorOptionsForm", "&Remove", nullptr));
#if QT_CONFIG(tooltip)
        PluginPathUpToolButton->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Move up path", nullptr));
#endif // QT_CONFIG(tooltip)
        PluginPathUpToolButton->setText(QCoreApplication::translate("qtractorOptionsForm", "&Up", nullptr));
#if QT_CONFIG(tooltip)
        PluginPathDownToolButton->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Move down path", nullptr));
#endif // QT_CONFIG(tooltip)
        PluginPathDownToolButton->setText(QCoreApplication::translate("qtractorOptionsForm", "&Down", nullptr));
        Lv2PresetDirLabel->setText(QCoreApplication::translate("qtractorOptionsForm", "&LV2 Presets directory:", nullptr));
#if QT_CONFIG(tooltip)
        Lv2PresetDirComboBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "LV2 Presets directory (default: ~/.lv2)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        Lv2PresetDirToolButton->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Browse LV2 Presets directory", nullptr));
#endif // QT_CONFIG(tooltip)
        Lv2PresetDirToolButton->setText(QCoreApplication::translate("qtractorOptionsForm", "...", nullptr));
        PluginsInstrumentsGroupBox->setTitle(QCoreApplication::translate("qtractorOptionsForm", "Instruments", nullptr));
#if QT_CONFIG(tooltip)
        AudioOutputBusCheckBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Whether to have separate audio output ports", nullptr));
#endif // QT_CONFIG(tooltip)
        AudioOutputBusCheckBox->setText(QCoreApplication::translate("qtractorOptionsForm", "Dedicated audi&o outputs:", nullptr));
#if QT_CONFIG(tooltip)
        AudioOutputAutoConnectCheckBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Whether to auto-connect dedicated audio output ports", nullptr));
#endif // QT_CONFIG(tooltip)
        AudioOutputAutoConnectCheckBox->setText(QCoreApplication::translate("qtractorOptionsForm", "Au&to-connect", nullptr));
        PluginsEditorGroupBox->setTitle(QCoreApplication::translate("qtractorOptionsForm", "Editor", nullptr));
#if QT_CONFIG(tooltip)
        OpenEditorCheckBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Whether to open plugin's editor (GUI) by default", nullptr));
#endif // QT_CONFIG(tooltip)
        OpenEditorCheckBox->setText(QCoreApplication::translate("qtractorOptionsForm", "Open plugin's &editor (GUI) by default", nullptr));
#if QT_CONFIG(tooltip)
        QueryEditorTypeCheckBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Whether to select plugin's editor (GUI) if more than one are available", nullptr));
#endif // QT_CONFIG(tooltip)
        QueryEditorTypeCheckBox->setText(QCoreApplication::translate("qtractorOptionsForm", "&Select plugin's editor (GUI) if more than one are available", nullptr));
        PluginsBlacklistGroupBox->setTitle(QCoreApplication::translate("qtractorOptionsForm", "Blacklist", nullptr));
#if QT_CONFIG(tooltip)
        PluginBlacklistComboBox->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Plugin blacklist path", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        PluginBlacklistToolButton->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Browse plugin blacklist path", nullptr));
#endif // QT_CONFIG(tooltip)
        PluginBlacklistToolButton->setText(QCoreApplication::translate("qtractorOptionsForm", "...", nullptr));
#if QT_CONFIG(tooltip)
        PluginBlacklistAddToolButton->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Add plugin blacklist path", nullptr));
#endif // QT_CONFIG(tooltip)
        PluginBlacklistAddToolButton->setText(QCoreApplication::translate("qtractorOptionsForm", "&Add", nullptr));
#if QT_CONFIG(statustip)
        PluginBlacklistWidget->setStatusTip(QCoreApplication::translate("qtractorOptionsForm", "Plugin blacklist paths", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        PluginBlacklistRemoveToolButton->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Remove plugin blacklist path", nullptr));
#endif // QT_CONFIG(tooltip)
        PluginBlacklistRemoveToolButton->setText(QCoreApplication::translate("qtractorOptionsForm", "&Remove", nullptr));
#if QT_CONFIG(tooltip)
        PluginBlacklistClearToolButton->setToolTip(QCoreApplication::translate("qtractorOptionsForm", "Clear plugin blacklist paths", nullptr));
#endif // QT_CONFIG(tooltip)
        PluginBlacklistClearToolButton->setText(QCoreApplication::translate("qtractorOptionsForm", "&Clear", nullptr));
        OptionsTabWidget->setTabText(OptionsTabWidget->indexOf(PluginsTabPage), QCoreApplication::translate("qtractorOptionsForm", "&Plugins", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qtractorOptionsForm: public Ui_qtractorOptionsForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTRACTOROPTIONSFORM_H
