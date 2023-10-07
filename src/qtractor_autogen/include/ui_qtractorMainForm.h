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
** Form generated from reading UI file 'qtractorMainForm.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTRACTORMAINFORM_H
#define UI_QTRACTORMAINFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qtractorMainForm
{
public:
    QAction *fileNewAction;
    QAction *fileOpenAction;
    QAction *fileSaveAction;
    QAction *fileSaveAsAction;
    QAction *filePropertiesAction;
    QAction *fileExitAction;
    QAction *editUndoAction;
    QAction *editRedoAction;
    QAction *editCutAction;
    QAction *editCopyAction;
    QAction *editPasteAction;
    QAction *editPasteRepeatAction;
    QAction *editDeleteAction;
    QAction *editSelectModeClipAction;
    QAction *editSelectModeRangeAction;
    QAction *editSelectModeRectAction;
    QAction *editSelectModeCurveAction;
    QAction *editSelectAllAction;
    QAction *editSelectNoneAction;
    QAction *editSelectInvertAction;
    QAction *editSelectTrackAction;
    QAction *editSelectTrackRangeAction;
    QAction *editSelectRangeAction;
    QAction *editRemoveRangeAction;
    QAction *editRemoveTrackRangeAction;
    QAction *editInsertRangeAction;
    QAction *editInsertTrackRangeAction;
    QAction *editSplitAction;
    QAction *trackAddAction;
    QAction *trackRemoveAction;
    QAction *trackDuplicateAction;
    QAction *trackPropertiesAction;
    QAction *trackInputsAction;
    QAction *trackOutputsAction;
    QAction *trackStateRecordAction;
    QAction *trackStateMuteAction;
    QAction *trackStateSoloAction;
    QAction *trackStateMonitorAction;
    QAction *trackNavigateFirstAction;
    QAction *trackNavigatePrevAction;
    QAction *trackNavigateNextAction;
    QAction *trackNavigateLastAction;
    QAction *trackNavigateNoneAction;
    QAction *trackMoveTopAction;
    QAction *trackMoveUpAction;
    QAction *trackMoveDownAction;
    QAction *trackMoveBottomAction;
    QAction *trackHeightUpAction;
    QAction *trackHeightDownAction;
    QAction *trackHeightResetAction;
    QAction *trackAutoMonitorAction;
    QAction *trackAutoDeactivateAction;
    QAction *trackImportAudioAction;
    QAction *trackImportMidiAction;
    QAction *trackExportAudioAction;
    QAction *trackExportMidiAction;
    QAction *trackCurveLogarithmicAction;
    QAction *trackCurveColorAction;
    QAction *trackCurveLockedAction;
    QAction *trackCurveProcessAction;
    QAction *trackCurveCaptureAction;
    QAction *trackCurveClearAction;
    QAction *trackCurveLockedAllAction;
    QAction *trackCurveProcessAllAction;
    QAction *trackCurveCaptureAllAction;
    QAction *trackCurveClearAllAction;
    QAction *clipNewAction;
    QAction *clipEditAction;
    QAction *clipUnlinkAction;
    QAction *clipRecordExAction;
    QAction *clipSplitAction;
    QAction *clipMergeAction;
    QAction *clipNormalizeAction;
    QAction *clipToolsQuantizeAction;
    QAction *clipToolsTransposeAction;
    QAction *clipToolsNormalizeAction;
    QAction *clipToolsRandomizeAction;
    QAction *clipToolsResizeAction;
    QAction *clipToolsRescaleAction;
    QAction *clipToolsTimeshiftAction;
    QAction *clipTempoAdjustAction;
    QAction *clipCrossFadeAction;
    QAction *clipRangeSetAction;
    QAction *clipLoopSetAction;
    QAction *clipImportAction;
    QAction *clipExportAction;
    QAction *clipTakeFirstAction;
    QAction *clipTakePrevAction;
    QAction *clipTakeNextAction;
    QAction *clipTakeLastAction;
    QAction *clipTakeResetAction;
    QAction *clipTakeRangeAction;
    QAction *viewMenubarAction;
    QAction *viewStatusbarAction;
    QAction *viewToolbarFileAction;
    QAction *viewToolbarEditAction;
    QAction *viewToolbarTrackAction;
    QAction *viewToolbarViewAction;
    QAction *viewToolbarOptionsAction;
    QAction *viewToolbarTransportAction;
    QAction *viewToolbarTimeAction;
    QAction *viewToolbarThumbAction;
    QAction *viewFileSystemAction;
    QAction *viewFilesAction;
    QAction *viewMessagesAction;
    QAction *viewConnectionsAction;
    QAction *viewMixerAction;
    QAction *viewZoomInAction;
    QAction *viewZoomOutAction;
    QAction *viewZoomResetAction;
    QAction *viewZoomHorizontalAction;
    QAction *viewZoomVerticalAction;
    QAction *viewZoomAllAction;
    QAction *viewSnapGridAction;
    QAction *viewSnapZebraAction;
    QAction *viewToolTipsAction;
    QAction *viewRefreshAction;
    QAction *viewInstrumentsAction;
    QAction *viewControllersAction;
    QAction *viewBusesAction;
    QAction *viewTempoMapAction;
    QAction *viewOptionsAction;
    QAction *transportBackwardAction;
    QAction *transportRewindAction;
    QAction *transportFastForwardAction;
    QAction *transportForwardAction;
    QAction *transportLoopAction;
    QAction *transportLoopSetAction;
    QAction *transportStopAction;
    QAction *transportPlayAction;
    QAction *transportRecordAction;
    QAction *transportPunchAction;
    QAction *transportPunchSetAction;
    QAction *transportCountInAction;
    QAction *transportMetroAction;
    QAction *transportFollowAction;
    QAction *transportAutoBackwardAction;
    QAction *transportContinueAction;
    QAction *transportModeNoneAction;
    QAction *transportModeSlaveAction;
    QAction *transportModeMasterAction;
    QAction *transportModeFullAction;
    QAction *transportPanicAction;
    QAction *helpShortcutsAction;
    QAction *helpAboutAction;
    QAction *helpAboutQtAction;
    QWidget *widget;
    QToolBar *fileToolbar;
    QToolBar *editToolbar;
    QToolBar *trackToolbar;
    QToolBar *viewToolbar;
    QToolBar *optionsToolbar;
    QToolBar *transportToolbar;
    QToolBar *timeToolbar;
    QToolBar *thumbViewToolbar;
    QMenuBar *menuBar;
    QMenu *fileMenu;
    QMenu *fileOpenRecentMenu;
    QMenu *trackMenu;
    QMenu *trackStateMenu;
    QMenu *trackNavigateMenu;
    QMenu *trackMoveMenu;
    QMenu *trackHeightMenu;
    QMenu *trackImportMenu;
    QMenu *trackExportMenu;
    QMenu *trackInstrumentMenu;
    QMenu *trackCurveMenu;
    QMenu *trackCurveSelectMenu;
    QMenu *trackCurveModeMenu;
    QMenu *clipMenu;
    QMenu *clipToolsMenu;
    QMenu *clipTakeMenu;
    QMenu *clipTakeSelectMenu;
    QMenu *editMenu;
    QMenu *editSelectModeMenu;
    QMenu *editSelectMenu;
    QMenu *editInsertMenu;
    QMenu *editRemoveMenu;
    QMenu *viewMenu;
    QMenu *viewToolbarsMenu;
    QMenu *viewWindowsMenu;
    QMenu *viewZoomMenu;
    QMenu *viewSnapMenu;
    QMenu *transportMenu;
    QMenu *transportModeMenu;
    QMenu *helpMenu;

    void setupUi(QMainWindow *qtractorMainForm)
    {
        if (qtractorMainForm->objectName().isEmpty())
            qtractorMainForm->setObjectName(QString::fromUtf8("qtractorMainForm"));
        qtractorMainForm->setEnabled(true);
        qtractorMainForm->resize(1024, 768);
        qtractorMainForm->setMinimumSize(QSize(320, 240));
        qtractorMainForm->setAcceptDrops(true);
        const QIcon icon = QIcon(QString::fromUtf8(":/images/qtractor.svg"));
        qtractorMainForm->setWindowIcon(icon);
        fileNewAction = new QAction(qtractorMainForm);
        fileNewAction->setObjectName(QString::fromUtf8("fileNewAction"));
        const QIcon icon1 = QIcon(QString::fromUtf8(":/images/fileNew.png"));
        fileNewAction->setIcon(icon1);
        fileOpenAction = new QAction(qtractorMainForm);
        fileOpenAction->setObjectName(QString::fromUtf8("fileOpenAction"));
        const QIcon icon2 = QIcon(QString::fromUtf8(":/images/fileOpen.png"));
        fileOpenAction->setIcon(icon2);
        fileSaveAction = new QAction(qtractorMainForm);
        fileSaveAction->setObjectName(QString::fromUtf8("fileSaveAction"));
        const QIcon icon3 = QIcon(QString::fromUtf8(":/images/fileSave.png"));
        fileSaveAction->setIcon(icon3);
        fileSaveAsAction = new QAction(qtractorMainForm);
        fileSaveAsAction->setObjectName(QString::fromUtf8("fileSaveAsAction"));
        filePropertiesAction = new QAction(qtractorMainForm);
        filePropertiesAction->setObjectName(QString::fromUtf8("filePropertiesAction"));
        fileExitAction = new QAction(qtractorMainForm);
        fileExitAction->setObjectName(QString::fromUtf8("fileExitAction"));
        editUndoAction = new QAction(qtractorMainForm);
        editUndoAction->setObjectName(QString::fromUtf8("editUndoAction"));
        const QIcon icon4 = QIcon(QString::fromUtf8(":/images/editUndo.png"));
        editUndoAction->setIcon(icon4);
        editRedoAction = new QAction(qtractorMainForm);
        editRedoAction->setObjectName(QString::fromUtf8("editRedoAction"));
        const QIcon icon5 = QIcon(QString::fromUtf8(":/images/editRedo.png"));
        editRedoAction->setIcon(icon5);
        editCutAction = new QAction(qtractorMainForm);
        editCutAction->setObjectName(QString::fromUtf8("editCutAction"));
        const QIcon icon6 = QIcon(QString::fromUtf8(":/images/editCut.png"));
        editCutAction->setIcon(icon6);
        editCopyAction = new QAction(qtractorMainForm);
        editCopyAction->setObjectName(QString::fromUtf8("editCopyAction"));
        const QIcon icon7 = QIcon(QString::fromUtf8(":/images/editCopy.png"));
        editCopyAction->setIcon(icon7);
        editPasteAction = new QAction(qtractorMainForm);
        editPasteAction->setObjectName(QString::fromUtf8("editPasteAction"));
        const QIcon icon8 = QIcon(QString::fromUtf8(":/images/editPaste.png"));
        editPasteAction->setIcon(icon8);
        editPasteRepeatAction = new QAction(qtractorMainForm);
        editPasteRepeatAction->setObjectName(QString::fromUtf8("editPasteRepeatAction"));
        editDeleteAction = new QAction(qtractorMainForm);
        editDeleteAction->setObjectName(QString::fromUtf8("editDeleteAction"));
        const QIcon icon9 = QIcon(QString::fromUtf8(":/images/editDelete.png"));
        editDeleteAction->setIcon(icon9);
        editSelectModeClipAction = new QAction(qtractorMainForm);
        editSelectModeClipAction->setObjectName(QString::fromUtf8("editSelectModeClipAction"));
        editSelectModeClipAction->setCheckable(true);
        const QIcon icon10 = QIcon(QString::fromUtf8(":/images/editSelectClip.png"));
        editSelectModeClipAction->setIcon(icon10);
        editSelectModeRangeAction = new QAction(qtractorMainForm);
        editSelectModeRangeAction->setObjectName(QString::fromUtf8("editSelectModeRangeAction"));
        editSelectModeRangeAction->setCheckable(true);
        const QIcon icon11 = QIcon(QString::fromUtf8(":/images/editSelectRange.png"));
        editSelectModeRangeAction->setIcon(icon11);
        editSelectModeRectAction = new QAction(qtractorMainForm);
        editSelectModeRectAction->setObjectName(QString::fromUtf8("editSelectModeRectAction"));
        editSelectModeRectAction->setCheckable(true);
        const QIcon icon12 = QIcon(QString::fromUtf8(":/images/editSelectRect.png"));
        editSelectModeRectAction->setIcon(icon12);
        editSelectModeCurveAction = new QAction(qtractorMainForm);
        editSelectModeCurveAction->setObjectName(QString::fromUtf8("editSelectModeCurveAction"));
        editSelectModeCurveAction->setCheckable(true);
        const QIcon icon13 = QIcon(QString::fromUtf8(":/images/editSelectCurve.png"));
        editSelectModeCurveAction->setIcon(icon13);
        editSelectAllAction = new QAction(qtractorMainForm);
        editSelectAllAction->setObjectName(QString::fromUtf8("editSelectAllAction"));
        editSelectNoneAction = new QAction(qtractorMainForm);
        editSelectNoneAction->setObjectName(QString::fromUtf8("editSelectNoneAction"));
        editSelectInvertAction = new QAction(qtractorMainForm);
        editSelectInvertAction->setObjectName(QString::fromUtf8("editSelectInvertAction"));
        editSelectTrackAction = new QAction(qtractorMainForm);
        editSelectTrackAction->setObjectName(QString::fromUtf8("editSelectTrackAction"));
        editSelectTrackRangeAction = new QAction(qtractorMainForm);
        editSelectTrackRangeAction->setObjectName(QString::fromUtf8("editSelectTrackRangeAction"));
        editSelectRangeAction = new QAction(qtractorMainForm);
        editSelectRangeAction->setObjectName(QString::fromUtf8("editSelectRangeAction"));
        editRemoveRangeAction = new QAction(qtractorMainForm);
        editRemoveRangeAction->setObjectName(QString::fromUtf8("editRemoveRangeAction"));
        editRemoveTrackRangeAction = new QAction(qtractorMainForm);
        editRemoveTrackRangeAction->setObjectName(QString::fromUtf8("editRemoveTrackRangeAction"));
        editInsertRangeAction = new QAction(qtractorMainForm);
        editInsertRangeAction->setObjectName(QString::fromUtf8("editInsertRangeAction"));
        editInsertTrackRangeAction = new QAction(qtractorMainForm);
        editInsertTrackRangeAction->setObjectName(QString::fromUtf8("editInsertTrackRangeAction"));
        editSplitAction = new QAction(qtractorMainForm);
        editSplitAction->setObjectName(QString::fromUtf8("editSplitAction"));
        trackAddAction = new QAction(qtractorMainForm);
        trackAddAction->setObjectName(QString::fromUtf8("trackAddAction"));
        const QIcon icon14 = QIcon(QString::fromUtf8(":/images/trackAdd.png"));
        trackAddAction->setIcon(icon14);
        trackRemoveAction = new QAction(qtractorMainForm);
        trackRemoveAction->setObjectName(QString::fromUtf8("trackRemoveAction"));
        const QIcon icon15 = QIcon(QString::fromUtf8(":/images/trackRemove.png"));
        trackRemoveAction->setIcon(icon15);
        trackDuplicateAction = new QAction(qtractorMainForm);
        trackDuplicateAction->setObjectName(QString::fromUtf8("trackDuplicateAction"));
        trackPropertiesAction = new QAction(qtractorMainForm);
        trackPropertiesAction->setObjectName(QString::fromUtf8("trackPropertiesAction"));
        const QIcon icon16 = QIcon(QString::fromUtf8(":/images/trackProperties.png"));
        trackPropertiesAction->setIcon(icon16);
        trackInputsAction = new QAction(qtractorMainForm);
        trackInputsAction->setObjectName(QString::fromUtf8("trackInputsAction"));
        trackOutputsAction = new QAction(qtractorMainForm);
        trackOutputsAction->setObjectName(QString::fromUtf8("trackOutputsAction"));
        trackStateRecordAction = new QAction(qtractorMainForm);
        trackStateRecordAction->setObjectName(QString::fromUtf8("trackStateRecordAction"));
        trackStateRecordAction->setCheckable(true);
        trackStateMuteAction = new QAction(qtractorMainForm);
        trackStateMuteAction->setObjectName(QString::fromUtf8("trackStateMuteAction"));
        trackStateMuteAction->setCheckable(true);
        trackStateSoloAction = new QAction(qtractorMainForm);
        trackStateSoloAction->setObjectName(QString::fromUtf8("trackStateSoloAction"));
        trackStateSoloAction->setCheckable(true);
        trackStateMonitorAction = new QAction(qtractorMainForm);
        trackStateMonitorAction->setObjectName(QString::fromUtf8("trackStateMonitorAction"));
        trackStateMonitorAction->setCheckable(true);
        trackNavigateFirstAction = new QAction(qtractorMainForm);
        trackNavigateFirstAction->setObjectName(QString::fromUtf8("trackNavigateFirstAction"));
        trackNavigatePrevAction = new QAction(qtractorMainForm);
        trackNavigatePrevAction->setObjectName(QString::fromUtf8("trackNavigatePrevAction"));
        trackNavigateNextAction = new QAction(qtractorMainForm);
        trackNavigateNextAction->setObjectName(QString::fromUtf8("trackNavigateNextAction"));
        trackNavigateLastAction = new QAction(qtractorMainForm);
        trackNavigateLastAction->setObjectName(QString::fromUtf8("trackNavigateLastAction"));
        trackNavigateNoneAction = new QAction(qtractorMainForm);
        trackNavigateNoneAction->setObjectName(QString::fromUtf8("trackNavigateNoneAction"));
        trackMoveTopAction = new QAction(qtractorMainForm);
        trackMoveTopAction->setObjectName(QString::fromUtf8("trackMoveTopAction"));
        trackMoveUpAction = new QAction(qtractorMainForm);
        trackMoveUpAction->setObjectName(QString::fromUtf8("trackMoveUpAction"));
        trackMoveDownAction = new QAction(qtractorMainForm);
        trackMoveDownAction->setObjectName(QString::fromUtf8("trackMoveDownAction"));
        trackMoveBottomAction = new QAction(qtractorMainForm);
        trackMoveBottomAction->setObjectName(QString::fromUtf8("trackMoveBottomAction"));
        trackHeightUpAction = new QAction(qtractorMainForm);
        trackHeightUpAction->setObjectName(QString::fromUtf8("trackHeightUpAction"));
        trackHeightDownAction = new QAction(qtractorMainForm);
        trackHeightDownAction->setObjectName(QString::fromUtf8("trackHeightDownAction"));
        trackHeightResetAction = new QAction(qtractorMainForm);
        trackHeightResetAction->setObjectName(QString::fromUtf8("trackHeightResetAction"));
        trackAutoMonitorAction = new QAction(qtractorMainForm);
        trackAutoMonitorAction->setObjectName(QString::fromUtf8("trackAutoMonitorAction"));
        trackAutoMonitorAction->setCheckable(true);
        trackAutoDeactivateAction = new QAction(qtractorMainForm);
        trackAutoDeactivateAction->setObjectName(QString::fromUtf8("trackAutoDeactivateAction"));
        trackAutoDeactivateAction->setCheckable(true);
        trackImportAudioAction = new QAction(qtractorMainForm);
        trackImportAudioAction->setObjectName(QString::fromUtf8("trackImportAudioAction"));
        const QIcon icon17 = QIcon(QString::fromUtf8(":/images/trackAudio.png"));
        trackImportAudioAction->setIcon(icon17);
        trackImportMidiAction = new QAction(qtractorMainForm);
        trackImportMidiAction->setObjectName(QString::fromUtf8("trackImportMidiAction"));
        const QIcon icon18 = QIcon(QString::fromUtf8(":/images/trackMidi.png"));
        trackImportMidiAction->setIcon(icon18);
        trackExportAudioAction = new QAction(qtractorMainForm);
        trackExportAudioAction->setObjectName(QString::fromUtf8("trackExportAudioAction"));
        trackExportAudioAction->setIcon(icon17);
        trackExportMidiAction = new QAction(qtractorMainForm);
        trackExportMidiAction->setObjectName(QString::fromUtf8("trackExportMidiAction"));
        trackExportMidiAction->setIcon(icon18);
        trackCurveLogarithmicAction = new QAction(qtractorMainForm);
        trackCurveLogarithmicAction->setObjectName(QString::fromUtf8("trackCurveLogarithmicAction"));
        trackCurveLogarithmicAction->setCheckable(true);
        trackCurveColorAction = new QAction(qtractorMainForm);
        trackCurveColorAction->setObjectName(QString::fromUtf8("trackCurveColorAction"));
        const QIcon icon19 = QIcon(QString::fromUtf8(":/images/formColor.png"));
        trackCurveColorAction->setIcon(icon19);
        trackCurveLockedAction = new QAction(qtractorMainForm);
        trackCurveLockedAction->setObjectName(QString::fromUtf8("trackCurveLockedAction"));
        trackCurveLockedAction->setCheckable(true);
        trackCurveProcessAction = new QAction(qtractorMainForm);
        trackCurveProcessAction->setObjectName(QString::fromUtf8("trackCurveProcessAction"));
        trackCurveProcessAction->setCheckable(true);
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/images/trackCurveEnabled.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon20.addFile(QString::fromUtf8(":/images/trackCurveProcess.png"), QSize(), QIcon::Normal, QIcon::On);
        icon20.addFile(QString::fromUtf8(":/images/trackCurveNone.png"), QSize(), QIcon::Disabled, QIcon::Off);
        trackCurveProcessAction->setIcon(icon20);
        trackCurveCaptureAction = new QAction(qtractorMainForm);
        trackCurveCaptureAction->setObjectName(QString::fromUtf8("trackCurveCaptureAction"));
        trackCurveCaptureAction->setCheckable(true);
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/images/trackCurveEnabled.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon21.addFile(QString::fromUtf8(":/images/trackCurveCapture.png"), QSize(), QIcon::Normal, QIcon::On);
        icon21.addFile(QString::fromUtf8(":/images/trackCurveNone.png"), QSize(), QIcon::Disabled, QIcon::Off);
        trackCurveCaptureAction->setIcon(icon21);
        trackCurveClearAction = new QAction(qtractorMainForm);
        trackCurveClearAction->setObjectName(QString::fromUtf8("trackCurveClearAction"));
        trackCurveLockedAllAction = new QAction(qtractorMainForm);
        trackCurveLockedAllAction->setObjectName(QString::fromUtf8("trackCurveLockedAllAction"));
        trackCurveLockedAllAction->setCheckable(true);
        trackCurveProcessAllAction = new QAction(qtractorMainForm);
        trackCurveProcessAllAction->setObjectName(QString::fromUtf8("trackCurveProcessAllAction"));
        trackCurveProcessAllAction->setCheckable(true);
        trackCurveCaptureAllAction = new QAction(qtractorMainForm);
        trackCurveCaptureAllAction->setObjectName(QString::fromUtf8("trackCurveCaptureAllAction"));
        trackCurveCaptureAllAction->setCheckable(true);
        trackCurveClearAllAction = new QAction(qtractorMainForm);
        trackCurveClearAllAction->setObjectName(QString::fromUtf8("trackCurveClearAllAction"));
        clipNewAction = new QAction(qtractorMainForm);
        clipNewAction->setObjectName(QString::fromUtf8("clipNewAction"));
        const QIcon icon22 = QIcon(QString::fromUtf8(":/images/clipNew.png"));
        clipNewAction->setIcon(icon22);
        clipEditAction = new QAction(qtractorMainForm);
        clipEditAction->setObjectName(QString::fromUtf8("clipEditAction"));
        const QIcon icon23 = QIcon(QString::fromUtf8(":/images/clipEdit.png"));
        clipEditAction->setIcon(icon23);
        clipUnlinkAction = new QAction(qtractorMainForm);
        clipUnlinkAction->setObjectName(QString::fromUtf8("clipUnlinkAction"));
        clipRecordExAction = new QAction(qtractorMainForm);
        clipRecordExAction->setObjectName(QString::fromUtf8("clipRecordExAction"));
        clipRecordExAction->setCheckable(true);
        const QIcon icon24 = QIcon(QString::fromUtf8(":/images/clipRecord.png"));
        clipRecordExAction->setIcon(icon24);
        clipSplitAction = new QAction(qtractorMainForm);
        clipSplitAction->setObjectName(QString::fromUtf8("clipSplitAction"));
        clipMergeAction = new QAction(qtractorMainForm);
        clipMergeAction->setObjectName(QString::fromUtf8("clipMergeAction"));
        clipNormalizeAction = new QAction(qtractorMainForm);
        clipNormalizeAction->setObjectName(QString::fromUtf8("clipNormalizeAction"));
        clipToolsQuantizeAction = new QAction(qtractorMainForm);
        clipToolsQuantizeAction->setObjectName(QString::fromUtf8("clipToolsQuantizeAction"));
        clipToolsTransposeAction = new QAction(qtractorMainForm);
        clipToolsTransposeAction->setObjectName(QString::fromUtf8("clipToolsTransposeAction"));
        clipToolsNormalizeAction = new QAction(qtractorMainForm);
        clipToolsNormalizeAction->setObjectName(QString::fromUtf8("clipToolsNormalizeAction"));
        clipToolsRandomizeAction = new QAction(qtractorMainForm);
        clipToolsRandomizeAction->setObjectName(QString::fromUtf8("clipToolsRandomizeAction"));
        clipToolsResizeAction = new QAction(qtractorMainForm);
        clipToolsResizeAction->setObjectName(QString::fromUtf8("clipToolsResizeAction"));
        clipToolsRescaleAction = new QAction(qtractorMainForm);
        clipToolsRescaleAction->setObjectName(QString::fromUtf8("clipToolsRescaleAction"));
        clipToolsTimeshiftAction = new QAction(qtractorMainForm);
        clipToolsTimeshiftAction->setObjectName(QString::fromUtf8("clipToolsTimeshiftAction"));
        clipTempoAdjustAction = new QAction(qtractorMainForm);
        clipTempoAdjustAction->setObjectName(QString::fromUtf8("clipTempoAdjustAction"));
        clipCrossFadeAction = new QAction(qtractorMainForm);
        clipCrossFadeAction->setObjectName(QString::fromUtf8("clipCrossFadeAction"));
        clipRangeSetAction = new QAction(qtractorMainForm);
        clipRangeSetAction->setObjectName(QString::fromUtf8("clipRangeSetAction"));
        clipLoopSetAction = new QAction(qtractorMainForm);
        clipLoopSetAction->setObjectName(QString::fromUtf8("clipLoopSetAction"));
        clipLoopSetAction->setCheckable(true);
        clipImportAction = new QAction(qtractorMainForm);
        clipImportAction->setObjectName(QString::fromUtf8("clipImportAction"));
        clipExportAction = new QAction(qtractorMainForm);
        clipExportAction->setObjectName(QString::fromUtf8("clipExportAction"));
        clipTakeFirstAction = new QAction(qtractorMainForm);
        clipTakeFirstAction->setObjectName(QString::fromUtf8("clipTakeFirstAction"));
        clipTakePrevAction = new QAction(qtractorMainForm);
        clipTakePrevAction->setObjectName(QString::fromUtf8("clipTakePrevAction"));
        clipTakeNextAction = new QAction(qtractorMainForm);
        clipTakeNextAction->setObjectName(QString::fromUtf8("clipTakeNextAction"));
        clipTakeLastAction = new QAction(qtractorMainForm);
        clipTakeLastAction->setObjectName(QString::fromUtf8("clipTakeLastAction"));
        clipTakeResetAction = new QAction(qtractorMainForm);
        clipTakeResetAction->setObjectName(QString::fromUtf8("clipTakeResetAction"));
        clipTakeRangeAction = new QAction(qtractorMainForm);
        clipTakeRangeAction->setObjectName(QString::fromUtf8("clipTakeRangeAction"));
        viewMenubarAction = new QAction(qtractorMainForm);
        viewMenubarAction->setObjectName(QString::fromUtf8("viewMenubarAction"));
        viewMenubarAction->setCheckable(true);
        viewStatusbarAction = new QAction(qtractorMainForm);
        viewStatusbarAction->setObjectName(QString::fromUtf8("viewStatusbarAction"));
        viewStatusbarAction->setCheckable(true);
        viewToolbarFileAction = new QAction(qtractorMainForm);
        viewToolbarFileAction->setObjectName(QString::fromUtf8("viewToolbarFileAction"));
        viewToolbarFileAction->setCheckable(true);
        viewToolbarEditAction = new QAction(qtractorMainForm);
        viewToolbarEditAction->setObjectName(QString::fromUtf8("viewToolbarEditAction"));
        viewToolbarEditAction->setCheckable(true);
        viewToolbarTrackAction = new QAction(qtractorMainForm);
        viewToolbarTrackAction->setObjectName(QString::fromUtf8("viewToolbarTrackAction"));
        viewToolbarTrackAction->setCheckable(true);
        viewToolbarViewAction = new QAction(qtractorMainForm);
        viewToolbarViewAction->setObjectName(QString::fromUtf8("viewToolbarViewAction"));
        viewToolbarViewAction->setCheckable(true);
        viewToolbarOptionsAction = new QAction(qtractorMainForm);
        viewToolbarOptionsAction->setObjectName(QString::fromUtf8("viewToolbarOptionsAction"));
        viewToolbarOptionsAction->setCheckable(true);
        viewToolbarTransportAction = new QAction(qtractorMainForm);
        viewToolbarTransportAction->setObjectName(QString::fromUtf8("viewToolbarTransportAction"));
        viewToolbarTransportAction->setCheckable(true);
        viewToolbarTimeAction = new QAction(qtractorMainForm);
        viewToolbarTimeAction->setObjectName(QString::fromUtf8("viewToolbarTimeAction"));
        viewToolbarTimeAction->setCheckable(true);
        viewToolbarThumbAction = new QAction(qtractorMainForm);
        viewToolbarThumbAction->setObjectName(QString::fromUtf8("viewToolbarThumbAction"));
        viewToolbarThumbAction->setCheckable(true);
        viewFileSystemAction = new QAction(qtractorMainForm);
        viewFileSystemAction->setObjectName(QString::fromUtf8("viewFileSystemAction"));
        viewFileSystemAction->setCheckable(true);
        const QIcon icon25 = QIcon(QString::fromUtf8(":/images/viewFileSystem.png"));
        viewFileSystemAction->setIcon(icon25);
        viewFilesAction = new QAction(qtractorMainForm);
        viewFilesAction->setObjectName(QString::fromUtf8("viewFilesAction"));
        viewFilesAction->setCheckable(true);
        const QIcon icon26 = QIcon(QString::fromUtf8(":/images/viewFiles.png"));
        viewFilesAction->setIcon(icon26);
        viewMessagesAction = new QAction(qtractorMainForm);
        viewMessagesAction->setObjectName(QString::fromUtf8("viewMessagesAction"));
        viewMessagesAction->setCheckable(true);
        const QIcon icon27 = QIcon(QString::fromUtf8(":/images/viewMessages.png"));
        viewMessagesAction->setIcon(icon27);
        viewConnectionsAction = new QAction(qtractorMainForm);
        viewConnectionsAction->setObjectName(QString::fromUtf8("viewConnectionsAction"));
        viewConnectionsAction->setCheckable(true);
        const QIcon icon28 = QIcon(QString::fromUtf8(":/images/viewConnections.png"));
        viewConnectionsAction->setIcon(icon28);
        viewMixerAction = new QAction(qtractorMainForm);
        viewMixerAction->setObjectName(QString::fromUtf8("viewMixerAction"));
        viewMixerAction->setCheckable(true);
        const QIcon icon29 = QIcon(QString::fromUtf8(":/images/viewMixer.png"));
        viewMixerAction->setIcon(icon29);
        viewZoomInAction = new QAction(qtractorMainForm);
        viewZoomInAction->setObjectName(QString::fromUtf8("viewZoomInAction"));
        const QIcon icon30 = QIcon(QString::fromUtf8(":/images/viewZoomIn.png"));
        viewZoomInAction->setIcon(icon30);
        viewZoomOutAction = new QAction(qtractorMainForm);
        viewZoomOutAction->setObjectName(QString::fromUtf8("viewZoomOutAction"));
        const QIcon icon31 = QIcon(QString::fromUtf8(":/images/viewZoomOut.png"));
        viewZoomOutAction->setIcon(icon31);
        viewZoomResetAction = new QAction(qtractorMainForm);
        viewZoomResetAction->setObjectName(QString::fromUtf8("viewZoomResetAction"));
        const QIcon icon32 = QIcon(QString::fromUtf8(":/images/viewZoomReset.png"));
        viewZoomResetAction->setIcon(icon32);
        viewZoomHorizontalAction = new QAction(qtractorMainForm);
        viewZoomHorizontalAction->setObjectName(QString::fromUtf8("viewZoomHorizontalAction"));
        viewZoomHorizontalAction->setCheckable(true);
        viewZoomVerticalAction = new QAction(qtractorMainForm);
        viewZoomVerticalAction->setObjectName(QString::fromUtf8("viewZoomVerticalAction"));
        viewZoomVerticalAction->setCheckable(true);
        viewZoomAllAction = new QAction(qtractorMainForm);
        viewZoomAllAction->setObjectName(QString::fromUtf8("viewZoomAllAction"));
        viewZoomAllAction->setCheckable(true);
        viewSnapGridAction = new QAction(qtractorMainForm);
        viewSnapGridAction->setObjectName(QString::fromUtf8("viewSnapGridAction"));
        viewSnapGridAction->setCheckable(true);
        viewSnapZebraAction = new QAction(qtractorMainForm);
        viewSnapZebraAction->setObjectName(QString::fromUtf8("viewSnapZebraAction"));
        viewSnapZebraAction->setCheckable(true);
        viewToolTipsAction = new QAction(qtractorMainForm);
        viewToolTipsAction->setObjectName(QString::fromUtf8("viewToolTipsAction"));
        viewToolTipsAction->setCheckable(true);
        viewRefreshAction = new QAction(qtractorMainForm);
        viewRefreshAction->setObjectName(QString::fromUtf8("viewRefreshAction"));
        viewInstrumentsAction = new QAction(qtractorMainForm);
        viewInstrumentsAction->setObjectName(QString::fromUtf8("viewInstrumentsAction"));
        const QIcon icon33 = QIcon(QString::fromUtf8(":/images/itemInstrument.png"));
        viewInstrumentsAction->setIcon(icon33);
        viewControllersAction = new QAction(qtractorMainForm);
        viewControllersAction->setObjectName(QString::fromUtf8("viewControllersAction"));
        const QIcon icon34 = QIcon(QString::fromUtf8(":/images/itemControllers.png"));
        viewControllersAction->setIcon(icon34);
        viewBusesAction = new QAction(qtractorMainForm);
        viewBusesAction->setObjectName(QString::fromUtf8("viewBusesAction"));
        const QIcon icon35 = QIcon(QString::fromUtf8(":/images/qtractorTracks.png"));
        viewBusesAction->setIcon(icon35);
        viewTempoMapAction = new QAction(qtractorMainForm);
        viewTempoMapAction->setObjectName(QString::fromUtf8("viewTempoMapAction"));
        viewOptionsAction = new QAction(qtractorMainForm);
        viewOptionsAction->setObjectName(QString::fromUtf8("viewOptionsAction"));
        transportBackwardAction = new QAction(qtractorMainForm);
        transportBackwardAction->setObjectName(QString::fromUtf8("transportBackwardAction"));
        const QIcon icon36 = QIcon(QString::fromUtf8(":/images/transportBackward.png"));
        transportBackwardAction->setIcon(icon36);
        transportRewindAction = new QAction(qtractorMainForm);
        transportRewindAction->setObjectName(QString::fromUtf8("transportRewindAction"));
        transportRewindAction->setCheckable(true);
        const QIcon icon37 = QIcon(QString::fromUtf8(":/images/transportRewind.png"));
        transportRewindAction->setIcon(icon37);
        transportFastForwardAction = new QAction(qtractorMainForm);
        transportFastForwardAction->setObjectName(QString::fromUtf8("transportFastForwardAction"));
        transportFastForwardAction->setCheckable(true);
        const QIcon icon38 = QIcon(QString::fromUtf8(":/images/transportFastForward.png"));
        transportFastForwardAction->setIcon(icon38);
        transportForwardAction = new QAction(qtractorMainForm);
        transportForwardAction->setObjectName(QString::fromUtf8("transportForwardAction"));
        const QIcon icon39 = QIcon(QString::fromUtf8(":/images/transportForward.png"));
        transportForwardAction->setIcon(icon39);
        transportLoopAction = new QAction(qtractorMainForm);
        transportLoopAction->setObjectName(QString::fromUtf8("transportLoopAction"));
        transportLoopAction->setCheckable(true);
        const QIcon icon40 = QIcon(QString::fromUtf8(":/images/transportLoop.png"));
        transportLoopAction->setIcon(icon40);
        transportLoopSetAction = new QAction(qtractorMainForm);
        transportLoopSetAction->setObjectName(QString::fromUtf8("transportLoopSetAction"));
        transportStopAction = new QAction(qtractorMainForm);
        transportStopAction->setObjectName(QString::fromUtf8("transportStopAction"));
        const QIcon icon41 = QIcon(QString::fromUtf8(":/images/transportStop.png"));
        transportStopAction->setIcon(icon41);
        transportPlayAction = new QAction(qtractorMainForm);
        transportPlayAction->setObjectName(QString::fromUtf8("transportPlayAction"));
        transportPlayAction->setCheckable(true);
        const QIcon icon42 = QIcon(QString::fromUtf8(":/images/transportPlay.png"));
        transportPlayAction->setIcon(icon42);
        transportRecordAction = new QAction(qtractorMainForm);
        transportRecordAction->setObjectName(QString::fromUtf8("transportRecordAction"));
        transportRecordAction->setCheckable(true);
        const QIcon icon43 = QIcon(QString::fromUtf8(":/images/transportRecord.png"));
        transportRecordAction->setIcon(icon43);
        transportPunchAction = new QAction(qtractorMainForm);
        transportPunchAction->setObjectName(QString::fromUtf8("transportPunchAction"));
        transportPunchAction->setCheckable(true);
        const QIcon icon44 = QIcon(QString::fromUtf8(":/images/transportPunch.png"));
        transportPunchAction->setIcon(icon44);
        transportPunchSetAction = new QAction(qtractorMainForm);
        transportPunchSetAction->setObjectName(QString::fromUtf8("transportPunchSetAction"));
        transportCountInAction = new QAction(qtractorMainForm);
        transportCountInAction->setObjectName(QString::fromUtf8("transportCountInAction"));
        transportCountInAction->setCheckable(true);
        const QIcon icon45 = QIcon(QString::fromUtf8(":/images/transportCountIn.png"));
        transportCountInAction->setIcon(icon45);
        transportMetroAction = new QAction(qtractorMainForm);
        transportMetroAction->setObjectName(QString::fromUtf8("transportMetroAction"));
        transportMetroAction->setCheckable(true);
        const QIcon icon46 = QIcon(QString::fromUtf8(":/images/transportMetro.png"));
        transportMetroAction->setIcon(icon46);
        transportFollowAction = new QAction(qtractorMainForm);
        transportFollowAction->setObjectName(QString::fromUtf8("transportFollowAction"));
        transportFollowAction->setCheckable(true);
        const QIcon icon47 = QIcon(QString::fromUtf8(":/images/transportFollow.png"));
        transportFollowAction->setIcon(icon47);
        transportAutoBackwardAction = new QAction(qtractorMainForm);
        transportAutoBackwardAction->setObjectName(QString::fromUtf8("transportAutoBackwardAction"));
        transportAutoBackwardAction->setCheckable(true);
        const QIcon icon48 = QIcon(QString::fromUtf8(":/images/transportAutoBackward.png"));
        transportAutoBackwardAction->setIcon(icon48);
        transportContinueAction = new QAction(qtractorMainForm);
        transportContinueAction->setObjectName(QString::fromUtf8("transportContinueAction"));
        transportContinueAction->setCheckable(true);
        const QIcon icon49 = QIcon(QString::fromUtf8(":/images/transportContinue.png"));
        transportContinueAction->setIcon(icon49);
        transportModeNoneAction = new QAction(qtractorMainForm);
        transportModeNoneAction->setObjectName(QString::fromUtf8("transportModeNoneAction"));
        transportModeNoneAction->setCheckable(true);
        const QIcon icon50 = QIcon(QString::fromUtf8(":/images/transportModeNone.png"));
        transportModeNoneAction->setIcon(icon50);
        transportModeSlaveAction = new QAction(qtractorMainForm);
        transportModeSlaveAction->setObjectName(QString::fromUtf8("transportModeSlaveAction"));
        transportModeSlaveAction->setCheckable(true);
        const QIcon icon51 = QIcon(QString::fromUtf8(":/images/transportModeSlave.png"));
        transportModeSlaveAction->setIcon(icon51);
        transportModeMasterAction = new QAction(qtractorMainForm);
        transportModeMasterAction->setObjectName(QString::fromUtf8("transportModeMasterAction"));
        transportModeMasterAction->setCheckable(true);
        const QIcon icon52 = QIcon(QString::fromUtf8(":/images/transportModeMaster.png"));
        transportModeMasterAction->setIcon(icon52);
        transportModeFullAction = new QAction(qtractorMainForm);
        transportModeFullAction->setObjectName(QString::fromUtf8("transportModeFullAction"));
        transportModeFullAction->setCheckable(true);
        const QIcon icon53 = QIcon(QString::fromUtf8(":/images/transportModeFull.png"));
        transportModeFullAction->setIcon(icon53);
        transportPanicAction = new QAction(qtractorMainForm);
        transportPanicAction->setObjectName(QString::fromUtf8("transportPanicAction"));
        const QIcon icon54 = QIcon(QString::fromUtf8(":/images/transportPanic.png"));
        transportPanicAction->setIcon(icon54);
        helpShortcutsAction = new QAction(qtractorMainForm);
        helpShortcutsAction->setObjectName(QString::fromUtf8("helpShortcutsAction"));
        const QIcon icon55 = QIcon(QString::fromUtf8(":/images/helpShortcuts.png"));
        helpShortcutsAction->setIcon(icon55);
        helpAboutAction = new QAction(qtractorMainForm);
        helpAboutAction->setObjectName(QString::fromUtf8("helpAboutAction"));
        helpAboutQtAction = new QAction(qtractorMainForm);
        helpAboutQtAction->setObjectName(QString::fromUtf8("helpAboutQtAction"));
        widget = new QWidget(qtractorMainForm);
        widget->setObjectName(QString::fromUtf8("widget"));
        qtractorMainForm->setCentralWidget(widget);
        fileToolbar = new QToolBar(qtractorMainForm);
        fileToolbar->setObjectName(QString::fromUtf8("fileToolbar"));
        fileToolbar->setOrientation(Qt::Horizontal);
        qtractorMainForm->addToolBar(Qt::TopToolBarArea, fileToolbar);
        editToolbar = new QToolBar(qtractorMainForm);
        editToolbar->setObjectName(QString::fromUtf8("editToolbar"));
        editToolbar->setOrientation(Qt::Horizontal);
        qtractorMainForm->addToolBar(Qt::TopToolBarArea, editToolbar);
        trackToolbar = new QToolBar(qtractorMainForm);
        trackToolbar->setObjectName(QString::fromUtf8("trackToolbar"));
        trackToolbar->setOrientation(Qt::Horizontal);
        qtractorMainForm->addToolBar(Qt::TopToolBarArea, trackToolbar);
        viewToolbar = new QToolBar(qtractorMainForm);
        viewToolbar->setObjectName(QString::fromUtf8("viewToolbar"));
        viewToolbar->setOrientation(Qt::Horizontal);
        qtractorMainForm->addToolBar(Qt::TopToolBarArea, viewToolbar);
        optionsToolbar = new QToolBar(qtractorMainForm);
        optionsToolbar->setObjectName(QString::fromUtf8("optionsToolbar"));
        optionsToolbar->setOrientation(Qt::Horizontal);
        qtractorMainForm->addToolBar(Qt::TopToolBarArea, optionsToolbar);
        transportToolbar = new QToolBar(qtractorMainForm);
        transportToolbar->setObjectName(QString::fromUtf8("transportToolbar"));
        transportToolbar->setOrientation(Qt::Horizontal);
        qtractorMainForm->addToolBar(Qt::TopToolBarArea, transportToolbar);
        timeToolbar = new QToolBar(qtractorMainForm);
        timeToolbar->setObjectName(QString::fromUtf8("timeToolbar"));
        timeToolbar->setOrientation(Qt::Horizontal);
        qtractorMainForm->addToolBar(Qt::TopToolBarArea, timeToolbar);
        thumbViewToolbar = new QToolBar(qtractorMainForm);
        thumbViewToolbar->setObjectName(QString::fromUtf8("thumbViewToolbar"));
        thumbViewToolbar->setOrientation(Qt::Horizontal);
        qtractorMainForm->addToolBar(Qt::TopToolBarArea, thumbViewToolbar);
        menuBar = new QMenuBar(qtractorMainForm);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 23));
        fileMenu = new QMenu(menuBar);
        fileMenu->setObjectName(QString::fromUtf8("fileMenu"));
        fileOpenRecentMenu = new QMenu(fileMenu);
        fileOpenRecentMenu->setObjectName(QString::fromUtf8("fileOpenRecentMenu"));
        trackMenu = new QMenu(menuBar);
        trackMenu->setObjectName(QString::fromUtf8("trackMenu"));
        trackStateMenu = new QMenu(trackMenu);
        trackStateMenu->setObjectName(QString::fromUtf8("trackStateMenu"));
        trackNavigateMenu = new QMenu(trackMenu);
        trackNavigateMenu->setObjectName(QString::fromUtf8("trackNavigateMenu"));
        trackMoveMenu = new QMenu(trackMenu);
        trackMoveMenu->setObjectName(QString::fromUtf8("trackMoveMenu"));
        trackHeightMenu = new QMenu(trackMenu);
        trackHeightMenu->setObjectName(QString::fromUtf8("trackHeightMenu"));
        trackImportMenu = new QMenu(trackMenu);
        trackImportMenu->setObjectName(QString::fromUtf8("trackImportMenu"));
        trackExportMenu = new QMenu(trackMenu);
        trackExportMenu->setObjectName(QString::fromUtf8("trackExportMenu"));
        trackInstrumentMenu = new QMenu(trackMenu);
        trackInstrumentMenu->setObjectName(QString::fromUtf8("trackInstrumentMenu"));
        trackCurveMenu = new QMenu(trackMenu);
        trackCurveMenu->setObjectName(QString::fromUtf8("trackCurveMenu"));
        trackCurveSelectMenu = new QMenu(trackCurveMenu);
        trackCurveSelectMenu->setObjectName(QString::fromUtf8("trackCurveSelectMenu"));
        trackCurveModeMenu = new QMenu(trackCurveMenu);
        trackCurveModeMenu->setObjectName(QString::fromUtf8("trackCurveModeMenu"));
        clipMenu = new QMenu(menuBar);
        clipMenu->setObjectName(QString::fromUtf8("clipMenu"));
        clipToolsMenu = new QMenu(clipMenu);
        clipToolsMenu->setObjectName(QString::fromUtf8("clipToolsMenu"));
        clipTakeMenu = new QMenu(clipMenu);
        clipTakeMenu->setObjectName(QString::fromUtf8("clipTakeMenu"));
        clipTakeSelectMenu = new QMenu(clipTakeMenu);
        clipTakeSelectMenu->setObjectName(QString::fromUtf8("clipTakeSelectMenu"));
        editMenu = new QMenu(menuBar);
        editMenu->setObjectName(QString::fromUtf8("editMenu"));
        editSelectModeMenu = new QMenu(editMenu);
        editSelectModeMenu->setObjectName(QString::fromUtf8("editSelectModeMenu"));
        editSelectMenu = new QMenu(editMenu);
        editSelectMenu->setObjectName(QString::fromUtf8("editSelectMenu"));
        editInsertMenu = new QMenu(editMenu);
        editInsertMenu->setObjectName(QString::fromUtf8("editInsertMenu"));
        editRemoveMenu = new QMenu(editMenu);
        editRemoveMenu->setObjectName(QString::fromUtf8("editRemoveMenu"));
        viewMenu = new QMenu(menuBar);
        viewMenu->setObjectName(QString::fromUtf8("viewMenu"));
        viewToolbarsMenu = new QMenu(viewMenu);
        viewToolbarsMenu->setObjectName(QString::fromUtf8("viewToolbarsMenu"));
        viewWindowsMenu = new QMenu(viewMenu);
        viewWindowsMenu->setObjectName(QString::fromUtf8("viewWindowsMenu"));
        viewZoomMenu = new QMenu(viewMenu);
        viewZoomMenu->setObjectName(QString::fromUtf8("viewZoomMenu"));
        const QIcon icon56 = QIcon(QString::fromUtf8(":/images/viewZoomTool.png"));
        viewZoomMenu->setIcon(icon56);
        viewSnapMenu = new QMenu(viewMenu);
        viewSnapMenu->setObjectName(QString::fromUtf8("viewSnapMenu"));
        transportMenu = new QMenu(menuBar);
        transportMenu->setObjectName(QString::fromUtf8("transportMenu"));
        transportModeMenu = new QMenu(transportMenu);
        transportModeMenu->setObjectName(QString::fromUtf8("transportModeMenu"));
        helpMenu = new QMenu(menuBar);
        helpMenu->setObjectName(QString::fromUtf8("helpMenu"));
        qtractorMainForm->setMenuBar(menuBar);

        fileToolbar->addAction(fileNewAction);
        fileToolbar->addAction(fileOpenAction);
        fileToolbar->addAction(fileSaveAction);
        editToolbar->addAction(editUndoAction);
        editToolbar->addAction(editRedoAction);
        editToolbar->addSeparator();
        editToolbar->addAction(editCutAction);
        editToolbar->addAction(editCopyAction);
        editToolbar->addAction(editPasteAction);
        editToolbar->addSeparator();
        editToolbar->addAction(editDeleteAction);
        editToolbar->addSeparator();
        editToolbar->addAction(clipNewAction);
        editToolbar->addAction(clipEditAction);
        trackToolbar->addAction(trackAddAction);
        trackToolbar->addAction(trackRemoveAction);
        trackToolbar->addSeparator();
        trackToolbar->addAction(trackPropertiesAction);
        viewToolbar->addAction(viewFileSystemAction);
        viewToolbar->addAction(viewFilesAction);
        viewToolbar->addAction(viewMessagesAction);
        viewToolbar->addAction(viewConnectionsAction);
        viewToolbar->addAction(viewMixerAction);
        optionsToolbar->addAction(transportCountInAction);
        optionsToolbar->addAction(transportMetroAction);
        optionsToolbar->addSeparator();
        optionsToolbar->addAction(transportFollowAction);
        optionsToolbar->addAction(transportAutoBackwardAction);
        optionsToolbar->addAction(transportContinueAction);
        optionsToolbar->addSeparator();
        optionsToolbar->addAction(transportPanicAction);
        transportToolbar->addAction(transportBackwardAction);
        transportToolbar->addAction(transportRewindAction);
        transportToolbar->addAction(transportFastForwardAction);
        transportToolbar->addAction(transportForwardAction);
        transportToolbar->addSeparator();
        transportToolbar->addAction(transportLoopAction);
        transportToolbar->addSeparator();
        transportToolbar->addAction(transportStopAction);
        transportToolbar->addAction(transportPlayAction);
        transportToolbar->addAction(transportRecordAction);
        transportToolbar->addSeparator();
        transportToolbar->addAction(transportPunchAction);
        menuBar->addAction(fileMenu->menuAction());
        menuBar->addAction(editMenu->menuAction());
        menuBar->addAction(trackMenu->menuAction());
        menuBar->addAction(clipMenu->menuAction());
        menuBar->addAction(viewMenu->menuAction());
        menuBar->addAction(transportMenu->menuAction());
        menuBar->addSeparator();
        menuBar->addAction(helpMenu->menuAction());
        fileMenu->addAction(fileNewAction);
        fileMenu->addSeparator();
        fileMenu->addAction(fileOpenAction);
        fileMenu->addAction(fileOpenRecentMenu->menuAction());
        fileMenu->addSeparator();
        fileMenu->addAction(fileSaveAction);
        fileMenu->addAction(fileSaveAsAction);
        fileMenu->addSeparator();
        fileMenu->addAction(filePropertiesAction);
        fileMenu->addSeparator();
        fileMenu->addAction(fileExitAction);
        trackMenu->addAction(trackAddAction);
        trackMenu->addAction(trackRemoveAction);
        trackMenu->addAction(trackDuplicateAction);
        trackMenu->addSeparator();
        trackMenu->addAction(trackPropertiesAction);
        trackMenu->addSeparator();
        trackMenu->addAction(trackInputsAction);
        trackMenu->addAction(trackOutputsAction);
        trackMenu->addSeparator();
        trackMenu->addAction(trackInstrumentMenu->menuAction());
        trackMenu->addSeparator();
        trackMenu->addAction(trackStateMenu->menuAction());
        trackMenu->addAction(trackNavigateMenu->menuAction());
        trackMenu->addAction(trackMoveMenu->menuAction());
        trackMenu->addAction(trackHeightMenu->menuAction());
        trackMenu->addSeparator();
        trackMenu->addAction(trackAutoMonitorAction);
        trackMenu->addAction(trackAutoDeactivateAction);
        trackMenu->addSeparator();
        trackMenu->addAction(trackImportMenu->menuAction());
        trackMenu->addAction(trackExportMenu->menuAction());
        trackMenu->addSeparator();
        trackMenu->addAction(trackCurveMenu->menuAction());
        trackStateMenu->addAction(trackStateRecordAction);
        trackStateMenu->addAction(trackStateMuteAction);
        trackStateMenu->addAction(trackStateSoloAction);
        trackStateMenu->addSeparator();
        trackStateMenu->addAction(trackStateMonitorAction);
        trackNavigateMenu->addAction(trackNavigateFirstAction);
        trackNavigateMenu->addAction(trackNavigatePrevAction);
        trackNavigateMenu->addAction(trackNavigateNextAction);
        trackNavigateMenu->addAction(trackNavigateLastAction);
        trackNavigateMenu->addSeparator();
        trackNavigateMenu->addAction(trackNavigateNoneAction);
        trackMoveMenu->addAction(trackMoveTopAction);
        trackMoveMenu->addAction(trackMoveUpAction);
        trackMoveMenu->addAction(trackMoveDownAction);
        trackMoveMenu->addAction(trackMoveBottomAction);
        trackHeightMenu->addAction(trackHeightUpAction);
        trackHeightMenu->addAction(trackHeightDownAction);
        trackHeightMenu->addSeparator();
        trackHeightMenu->addAction(trackHeightResetAction);
        trackImportMenu->addAction(trackImportAudioAction);
        trackImportMenu->addAction(trackImportMidiAction);
        trackExportMenu->addAction(trackExportAudioAction);
        trackExportMenu->addAction(trackExportMidiAction);
        trackCurveMenu->addAction(trackCurveSelectMenu->menuAction());
        trackCurveMenu->addSeparator();
        trackCurveMenu->addSeparator();
        trackCurveMenu->addAction(trackCurveModeMenu->menuAction());
        trackCurveMenu->addAction(trackCurveLockedAction);
        trackCurveMenu->addSeparator();
        trackCurveMenu->addAction(trackCurveProcessAction);
        trackCurveMenu->addAction(trackCurveCaptureAction);
        trackCurveMenu->addSeparator();
        trackCurveMenu->addAction(trackCurveClearAction);
        trackCurveMenu->addSeparator();
        trackCurveMenu->addAction(trackCurveLockedAllAction);
        trackCurveMenu->addAction(trackCurveProcessAllAction);
        trackCurveMenu->addAction(trackCurveCaptureAllAction);
        trackCurveMenu->addSeparator();
        trackCurveMenu->addAction(trackCurveClearAllAction);
        clipMenu->addAction(clipNewAction);
        clipMenu->addAction(clipEditAction);
        clipMenu->addSeparator();
        clipMenu->addAction(clipTakeMenu->menuAction());
        clipMenu->addAction(clipUnlinkAction);
        clipMenu->addAction(clipRecordExAction);
        clipMenu->addSeparator();
        clipMenu->addAction(clipSplitAction);
        clipMenu->addAction(clipMergeAction);
        clipMenu->addAction(clipNormalizeAction);
        clipMenu->addSeparator();
        clipMenu->addAction(clipTempoAdjustAction);
        clipMenu->addAction(clipCrossFadeAction);
        clipMenu->addSeparator();
        clipMenu->addAction(clipRangeSetAction);
        clipMenu->addAction(clipLoopSetAction);
        clipMenu->addSeparator();
        clipMenu->addAction(clipImportAction);
        clipMenu->addAction(clipExportAction);
        clipMenu->addSeparator();
        clipMenu->addAction(clipToolsMenu->menuAction());
        clipToolsMenu->addAction(clipToolsQuantizeAction);
        clipToolsMenu->addAction(clipToolsTransposeAction);
        clipToolsMenu->addAction(clipToolsNormalizeAction);
        clipToolsMenu->addAction(clipToolsRandomizeAction);
        clipToolsMenu->addAction(clipToolsResizeAction);
        clipToolsMenu->addAction(clipToolsRescaleAction);
        clipToolsMenu->addAction(clipToolsTimeshiftAction);
        clipTakeMenu->addAction(clipTakeSelectMenu->menuAction());
        clipTakeMenu->addSeparator();
        clipTakeMenu->addAction(clipTakeFirstAction);
        clipTakeMenu->addAction(clipTakePrevAction);
        clipTakeMenu->addAction(clipTakeNextAction);
        clipTakeMenu->addAction(clipTakeLastAction);
        clipTakeMenu->addSeparator();
        clipTakeMenu->addAction(clipTakeResetAction);
        clipTakeMenu->addSeparator();
        clipTakeMenu->addAction(clipTakeRangeAction);
        editMenu->addAction(editUndoAction);
        editMenu->addAction(editRedoAction);
        editMenu->addSeparator();
        editMenu->addAction(editCutAction);
        editMenu->addAction(editCopyAction);
        editMenu->addAction(editPasteAction);
        editMenu->addAction(editPasteRepeatAction);
        editMenu->addSeparator();
        editMenu->addAction(editDeleteAction);
        editMenu->addSeparator();
        editMenu->addAction(editSelectModeMenu->menuAction());
        editMenu->addAction(editSelectMenu->menuAction());
        editMenu->addSeparator();
        editMenu->addAction(editInsertMenu->menuAction());
        editMenu->addAction(editRemoveMenu->menuAction());
        editMenu->addSeparator();
        editMenu->addAction(editSplitAction);
        editMenu->addSeparator();
        editMenu->addAction(trackMenu->menuAction());
        editMenu->addAction(clipMenu->menuAction());
        editSelectModeMenu->addAction(editSelectModeClipAction);
        editSelectModeMenu->addAction(editSelectModeRangeAction);
        editSelectModeMenu->addAction(editSelectModeRectAction);
        editSelectModeMenu->addSeparator();
        editSelectModeMenu->addAction(editSelectModeCurveAction);
        editSelectMenu->addAction(editSelectAllAction);
        editSelectMenu->addAction(editSelectNoneAction);
        editSelectMenu->addAction(editSelectInvertAction);
        editSelectMenu->addSeparator();
        editSelectMenu->addAction(editSelectTrackAction);
        editSelectMenu->addAction(editSelectTrackRangeAction);
        editSelectMenu->addAction(editSelectRangeAction);
        editInsertMenu->addAction(editInsertRangeAction);
        editInsertMenu->addAction(editInsertTrackRangeAction);
        editRemoveMenu->addAction(editRemoveRangeAction);
        editRemoveMenu->addAction(editRemoveTrackRangeAction);
        viewMenu->addAction(viewMenubarAction);
        viewMenu->addAction(viewStatusbarAction);
        viewMenu->addAction(viewToolbarsMenu->menuAction());
        viewMenu->addAction(viewWindowsMenu->menuAction());
        viewMenu->addSeparator();
        viewMenu->addAction(viewToolTipsAction);
        viewMenu->addSeparator();
        viewMenu->addAction(viewZoomMenu->menuAction());
        viewMenu->addAction(viewSnapMenu->menuAction());
        viewMenu->addSeparator();
        viewMenu->addAction(viewRefreshAction);
        viewMenu->addSeparator();
        viewMenu->addAction(viewInstrumentsAction);
        viewMenu->addAction(viewControllersAction);
        viewMenu->addAction(viewBusesAction);
        viewMenu->addAction(viewTempoMapAction);
        viewMenu->addSeparator();
        viewMenu->addAction(viewOptionsAction);
        viewToolbarsMenu->addAction(viewToolbarFileAction);
        viewToolbarsMenu->addAction(viewToolbarEditAction);
        viewToolbarsMenu->addAction(viewToolbarTrackAction);
        viewToolbarsMenu->addAction(viewToolbarViewAction);
        viewToolbarsMenu->addAction(viewToolbarOptionsAction);
        viewToolbarsMenu->addAction(viewToolbarTransportAction);
        viewToolbarsMenu->addAction(viewToolbarTimeAction);
        viewToolbarsMenu->addAction(viewToolbarThumbAction);
        viewWindowsMenu->addAction(viewFileSystemAction);
        viewWindowsMenu->addAction(viewFilesAction);
        viewWindowsMenu->addAction(viewMessagesAction);
        viewWindowsMenu->addAction(viewConnectionsAction);
        viewWindowsMenu->addAction(viewMixerAction);
        viewZoomMenu->addAction(viewZoomInAction);
        viewZoomMenu->addAction(viewZoomOutAction);
        viewZoomMenu->addSeparator();
        viewZoomMenu->addAction(viewZoomResetAction);
        viewZoomMenu->addSeparator();
        viewZoomMenu->addAction(viewZoomHorizontalAction);
        viewZoomMenu->addAction(viewZoomVerticalAction);
        viewZoomMenu->addAction(viewZoomAllAction);
        transportMenu->addAction(transportBackwardAction);
        transportMenu->addAction(transportRewindAction);
        transportMenu->addAction(transportFastForwardAction);
        transportMenu->addAction(transportForwardAction);
        transportMenu->addSeparator();
        transportMenu->addAction(transportLoopAction);
        transportMenu->addAction(transportLoopSetAction);
        transportMenu->addSeparator();
        transportMenu->addAction(transportStopAction);
        transportMenu->addAction(transportPlayAction);
        transportMenu->addAction(transportRecordAction);
        transportMenu->addSeparator();
        transportMenu->addAction(transportPunchAction);
        transportMenu->addAction(transportPunchSetAction);
        transportMenu->addSeparator();
        transportMenu->addAction(transportCountInAction);
        transportMenu->addAction(transportMetroAction);
        transportMenu->addSeparator();
        transportMenu->addAction(transportFollowAction);
        transportMenu->addAction(transportAutoBackwardAction);
        transportMenu->addAction(transportContinueAction);
        transportMenu->addSeparator();
        transportMenu->addAction(transportModeMenu->menuAction());
        transportMenu->addSeparator();
        transportMenu->addAction(transportPanicAction);
        transportModeMenu->addAction(transportModeNoneAction);
        transportModeMenu->addAction(transportModeSlaveAction);
        transportModeMenu->addAction(transportModeMasterAction);
        transportModeMenu->addAction(transportModeFullAction);
        helpMenu->addAction(helpShortcutsAction);
        helpMenu->addSeparator();
        helpMenu->addAction(helpAboutAction);
        helpMenu->addAction(helpAboutQtAction);

        retranslateUi(qtractorMainForm);

        QMetaObject::connectSlotsByName(qtractorMainForm);
    } // setupUi

    void retranslateUi(QMainWindow *qtractorMainForm)
    {
        fileNewAction->setText(QCoreApplication::translate("qtractorMainForm", "&New", nullptr));
        fileNewAction->setIconText(QCoreApplication::translate("qtractorMainForm", "New", nullptr));
#if QT_CONFIG(tooltip)
        fileNewAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "New session", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        fileNewAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "New session file", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        fileNewAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        fileOpenAction->setText(QCoreApplication::translate("qtractorMainForm", "&Open...", nullptr));
        fileOpenAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Open", nullptr));
#if QT_CONFIG(tooltip)
        fileOpenAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Open session", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        fileOpenAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Open session from file", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        fileOpenAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        fileSaveAction->setText(QCoreApplication::translate("qtractorMainForm", "&Save", nullptr));
        fileSaveAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Save", nullptr));
#if QT_CONFIG(tooltip)
        fileSaveAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Save session", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        fileSaveAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Save session to file", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        fileSaveAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        fileSaveAsAction->setText(QCoreApplication::translate("qtractorMainForm", "Save &As...", nullptr));
        fileSaveAsAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Save As", nullptr));
#if QT_CONFIG(tooltip)
        fileSaveAsAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Save as", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        fileSaveAsAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Save current session with another file name", nullptr));
#endif // QT_CONFIG(statustip)
        filePropertiesAction->setText(QCoreApplication::translate("qtractorMainForm", "&Properties...", nullptr));
        filePropertiesAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Session Properties", nullptr));
#if QT_CONFIG(tooltip)
        filePropertiesAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Session properties", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        filePropertiesAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Edit current session properties", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        filePropertiesAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "F2", nullptr));
#endif // QT_CONFIG(shortcut)
        fileExitAction->setText(QCoreApplication::translate("qtractorMainForm", "E&xit", nullptr));
        fileExitAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Exit", nullptr));
#if QT_CONFIG(tooltip)
        fileExitAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Exit", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        fileExitAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Exit this application program", nullptr));
#endif // QT_CONFIG(statustip)
        editUndoAction->setText(QCoreApplication::translate("qtractorMainForm", "&Undo", nullptr));
        editUndoAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Undo", nullptr));
#if QT_CONFIG(tooltip)
        editUndoAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Undo", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        editUndoAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Undo last action", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        editUndoAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        editRedoAction->setText(QCoreApplication::translate("qtractorMainForm", "&Redo", nullptr));
        editRedoAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Redo", nullptr));
#if QT_CONFIG(tooltip)
        editRedoAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Redo", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        editRedoAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Redo last action", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        editRedoAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "Ctrl+Shift+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        editCutAction->setText(QCoreApplication::translate("qtractorMainForm", "Cu&t", nullptr));
        editCutAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Cut", nullptr));
#if QT_CONFIG(tooltip)
        editCutAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Cut", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        editCutAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Cut selection to clipboard", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        editCutAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        editCopyAction->setText(QCoreApplication::translate("qtractorMainForm", "&Copy", nullptr));
        editCopyAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Copy", nullptr));
#if QT_CONFIG(tooltip)
        editCopyAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Copy", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        editCopyAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Copy selection to clipboard", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        editCopyAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        editPasteAction->setText(QCoreApplication::translate("qtractorMainForm", "&Paste", nullptr));
        editPasteAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Paste", nullptr));
#if QT_CONFIG(tooltip)
        editPasteAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Paste", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        editPasteAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Paste clipboard contents", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        editPasteAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        editPasteRepeatAction->setText(QCoreApplication::translate("qtractorMainForm", "Past&e Repeat...", nullptr));
        editPasteRepeatAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Paste Repeat", nullptr));
#if QT_CONFIG(tooltip)
        editPasteRepeatAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Paste repeat", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        editPasteRepeatAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Paste/repeat clipboard contents", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        editPasteRepeatAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "Ctrl+Shift+V", nullptr));
#endif // QT_CONFIG(shortcut)
        editDeleteAction->setText(QCoreApplication::translate("qtractorMainForm", "&Delete", nullptr));
        editDeleteAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Delete", nullptr));
#if QT_CONFIG(tooltip)
        editDeleteAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Delete", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        editDeleteAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Delete selection", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        editDeleteAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        editSelectModeClipAction->setText(QCoreApplication::translate("qtractorMainForm", "&Clip", nullptr));
        editSelectModeClipAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Clip", nullptr));
#if QT_CONFIG(tooltip)
        editSelectModeClipAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Select clip", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        editSelectModeClipAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Clip selection mode", nullptr));
#endif // QT_CONFIG(statustip)
        editSelectModeRangeAction->setText(QCoreApplication::translate("qtractorMainForm", "&Range", nullptr));
        editSelectModeRangeAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Range", nullptr));
#if QT_CONFIG(tooltip)
        editSelectModeRangeAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Select range", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        editSelectModeRangeAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Range selection mode", nullptr));
#endif // QT_CONFIG(statustip)
        editSelectModeRectAction->setText(QCoreApplication::translate("qtractorMainForm", "R&ectangle", nullptr));
        editSelectModeRectAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Rect", nullptr));
#if QT_CONFIG(tooltip)
        editSelectModeRectAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Select rectangle", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        editSelectModeRectAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Rectangular selection mode", nullptr));
#endif // QT_CONFIG(statustip)
        editSelectModeCurveAction->setText(QCoreApplication::translate("qtractorMainForm", "&Automation", nullptr));
        editSelectModeCurveAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Automation", nullptr));
#if QT_CONFIG(tooltip)
        editSelectModeCurveAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Automation", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        editSelectModeCurveAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Automation edit mode", nullptr));
#endif // QT_CONFIG(statustip)
        editSelectAllAction->setText(QCoreApplication::translate("qtractorMainForm", "&All", nullptr));
        editSelectAllAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Select All", nullptr));
#if QT_CONFIG(tooltip)
        editSelectAllAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Select all", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        editSelectAllAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Mark all as selected", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        editSelectAllAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        editSelectNoneAction->setText(QCoreApplication::translate("qtractorMainForm", "&None", nullptr));
        editSelectNoneAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Select None", nullptr));
#if QT_CONFIG(tooltip)
        editSelectNoneAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Select none", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        editSelectNoneAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Mark all as unselected", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        editSelectNoneAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "Ctrl+Shift+A", nullptr));
#endif // QT_CONFIG(shortcut)
        editSelectInvertAction->setText(QCoreApplication::translate("qtractorMainForm", "&Invert", nullptr));
        editSelectInvertAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Select Invert", nullptr));
#if QT_CONFIG(tooltip)
        editSelectInvertAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Select invert", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        editSelectInvertAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Invert selection", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        editSelectInvertAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        editSelectTrackAction->setText(QCoreApplication::translate("qtractorMainForm", "&Track", nullptr));
        editSelectTrackAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Select Track", nullptr));
#if QT_CONFIG(tooltip)
        editSelectTrackAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Select track", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        editSelectTrackAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Mark track as selected", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        editSelectTrackAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "Ctrl+T", nullptr));
#endif // QT_CONFIG(shortcut)
        editSelectTrackRangeAction->setText(QCoreApplication::translate("qtractorMainForm", "Trac&k Range", nullptr));
        editSelectTrackRangeAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Select Track Range", nullptr));
#if QT_CONFIG(tooltip)
        editSelectTrackRangeAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Select track range", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        editSelectTrackRangeAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Mark track range as selected", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        editSelectTrackRangeAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "Ctrl+Shift+R", nullptr));
#endif // QT_CONFIG(shortcut)
        editSelectRangeAction->setText(QCoreApplication::translate("qtractorMainForm", "&Range", nullptr));
        editSelectRangeAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Select Range", nullptr));
#if QT_CONFIG(tooltip)
        editSelectRangeAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Select range", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        editSelectRangeAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Mark range as selected", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        editSelectRangeAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        editRemoveRangeAction->setText(QCoreApplication::translate("qtractorMainForm", "&Range...", nullptr));
        editRemoveRangeAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Remove Range", nullptr));
#if QT_CONFIG(tooltip)
        editRemoveRangeAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Remove range", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        editRemoveRangeAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Remove range as selected", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        editRemoveRangeAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "Ctrl+Del", nullptr));
#endif // QT_CONFIG(shortcut)
        editRemoveTrackRangeAction->setText(QCoreApplication::translate("qtractorMainForm", "Trac&k Range", nullptr));
        editRemoveTrackRangeAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Remove Track Range", nullptr));
#if QT_CONFIG(tooltip)
        editRemoveTrackRangeAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Remove track range", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        editRemoveTrackRangeAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Remove track range as selected", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        editRemoveTrackRangeAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "Ctrl+Shift+Del", nullptr));
#endif // QT_CONFIG(shortcut)
        editInsertRangeAction->setText(QCoreApplication::translate("qtractorMainForm", "&Range...", nullptr));
        editInsertRangeAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Insert Range", nullptr));
#if QT_CONFIG(tooltip)
        editInsertRangeAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Insert range", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        editInsertRangeAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Insert range as selected", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        editInsertRangeAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "Ctrl+Ins", nullptr));
#endif // QT_CONFIG(shortcut)
        editInsertTrackRangeAction->setText(QCoreApplication::translate("qtractorMainForm", "Trac&k Range", nullptr));
        editInsertTrackRangeAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Insert Track Range", nullptr));
#if QT_CONFIG(tooltip)
        editInsertTrackRangeAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Insert track range", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        editInsertTrackRangeAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Insert track range as selected", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        editInsertTrackRangeAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "Ctrl+Shift+Ins", nullptr));
#endif // QT_CONFIG(shortcut)
        editSplitAction->setText(QCoreApplication::translate("qtractorMainForm", "Sp&lit", nullptr));
        editSplitAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Split Selection", nullptr));
#if QT_CONFIG(tooltip)
        editSplitAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Split selection", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        editSplitAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Split current selection", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        editSplitAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        trackAddAction->setText(QCoreApplication::translate("qtractorMainForm", "&Add Track...", nullptr));
        trackAddAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Add Track", nullptr));
#if QT_CONFIG(tooltip)
        trackAddAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Add track", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        trackAddAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Add a new track to session", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        trackAddAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "Shift+Ins", nullptr));
#endif // QT_CONFIG(shortcut)
        trackRemoveAction->setText(QCoreApplication::translate("qtractorMainForm", "&Remove Track", nullptr));
        trackRemoveAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Remove Track", nullptr));
#if QT_CONFIG(tooltip)
        trackRemoveAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Remove track", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        trackRemoveAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Remove current track from session", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        trackRemoveAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "Shift+Del", nullptr));
#endif // QT_CONFIG(shortcut)
        trackDuplicateAction->setText(QCoreApplication::translate("qtractorMainForm", "&Duplicate Track", nullptr));
        trackDuplicateAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Duplicate Track", nullptr));
#if QT_CONFIG(tooltip)
        trackDuplicateAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Duplicate track", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        trackDuplicateAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Duplicate current track", nullptr));
#endif // QT_CONFIG(statustip)
        trackPropertiesAction->setText(QCoreApplication::translate("qtractorMainForm", "Track &Properties...", nullptr));
        trackPropertiesAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Track Properties", nullptr));
#if QT_CONFIG(tooltip)
        trackPropertiesAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Track properties", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        trackPropertiesAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Edit current track properties", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        trackPropertiesAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "Shift+F2", nullptr));
#endif // QT_CONFIG(shortcut)
        trackInputsAction->setText(QCoreApplication::translate("qtractorMainForm", "&Inputs", nullptr));
        trackInputsAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Track Inputs", nullptr));
#if QT_CONFIG(tooltip)
        trackInputsAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Track inputs", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        trackInputsAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Show current track input bus connections", nullptr));
#endif // QT_CONFIG(statustip)
        trackOutputsAction->setText(QCoreApplication::translate("qtractorMainForm", "&Outputs", nullptr));
        trackOutputsAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Track Outputs", nullptr));
#if QT_CONFIG(tooltip)
        trackOutputsAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Track outputs", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        trackOutputsAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Show current track output bus connections", nullptr));
#endif // QT_CONFIG(statustip)
        trackStateRecordAction->setText(QCoreApplication::translate("qtractorMainForm", "&Record", nullptr));
        trackStateRecordAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Record Track", nullptr));
#if QT_CONFIG(tooltip)
        trackStateRecordAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Record track", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        trackStateRecordAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Arm current track for recording", nullptr));
#endif // QT_CONFIG(statustip)
        trackStateMuteAction->setText(QCoreApplication::translate("qtractorMainForm", "&Mute", nullptr));
        trackStateMuteAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Mute Track", nullptr));
#if QT_CONFIG(tooltip)
        trackStateMuteAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Mute track", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        trackStateMuteAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Mute current track", nullptr));
#endif // QT_CONFIG(statustip)
        trackStateSoloAction->setText(QCoreApplication::translate("qtractorMainForm", "&Solo", nullptr));
        trackStateSoloAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Solo Track", nullptr));
#if QT_CONFIG(tooltip)
        trackStateSoloAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Solo track", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        trackStateSoloAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Solo current track", nullptr));
#endif // QT_CONFIG(statustip)
        trackStateMonitorAction->setText(QCoreApplication::translate("qtractorMainForm", "M&onitor", nullptr));
        trackStateMonitorAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Monitor Track", nullptr));
#if QT_CONFIG(tooltip)
        trackStateMonitorAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Monitor track", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        trackStateMonitorAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Monitor current track", nullptr));
#endif // QT_CONFIG(statustip)
        trackNavigateFirstAction->setText(QCoreApplication::translate("qtractorMainForm", "&First", nullptr));
        trackNavigateFirstAction->setIconText(QCoreApplication::translate("qtractorMainForm", "First Track", nullptr));
#if QT_CONFIG(tooltip)
        trackNavigateFirstAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "First track", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        trackNavigateFirstAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Make current the first track", nullptr));
#endif // QT_CONFIG(statustip)
        trackNavigatePrevAction->setText(QCoreApplication::translate("qtractorMainForm", "&Previous", nullptr));
        trackNavigatePrevAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Previous Track", nullptr));
#if QT_CONFIG(tooltip)
        trackNavigatePrevAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Previous track", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        trackNavigatePrevAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Make current the previous track", nullptr));
#endif // QT_CONFIG(statustip)
        trackNavigateNextAction->setText(QCoreApplication::translate("qtractorMainForm", "&Next", nullptr));
        trackNavigateNextAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Next Track", nullptr));
#if QT_CONFIG(tooltip)
        trackNavigateNextAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Next track", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        trackNavigateNextAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Make current the next track", nullptr));
#endif // QT_CONFIG(statustip)
        trackNavigateLastAction->setText(QCoreApplication::translate("qtractorMainForm", "&Last", nullptr));
        trackNavigateLastAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Last Track", nullptr));
#if QT_CONFIG(tooltip)
        trackNavigateLastAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Last track", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        trackNavigateLastAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Make current the last track", nullptr));
#endif // QT_CONFIG(statustip)
        trackNavigateNoneAction->setText(QCoreApplication::translate("qtractorMainForm", "N&one", nullptr));
        trackNavigateNoneAction->setIconText(QCoreApplication::translate("qtractorMainForm", "None Track", nullptr));
#if QT_CONFIG(tooltip)
        trackNavigateNoneAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "None track", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        trackNavigateNoneAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "None current track", nullptr));
#endif // QT_CONFIG(statustip)
        trackMoveTopAction->setText(QCoreApplication::translate("qtractorMainForm", "&Top", nullptr));
        trackMoveTopAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Move Top", nullptr));
#if QT_CONFIG(tooltip)
        trackMoveTopAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Move top", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        trackMoveTopAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Move current track to top", nullptr));
#endif // QT_CONFIG(statustip)
        trackMoveUpAction->setText(QCoreApplication::translate("qtractorMainForm", "&Up", nullptr));
        trackMoveUpAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Move Up", nullptr));
#if QT_CONFIG(tooltip)
        trackMoveUpAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Move up", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        trackMoveUpAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Move current track up", nullptr));
#endif // QT_CONFIG(statustip)
        trackMoveDownAction->setText(QCoreApplication::translate("qtractorMainForm", "&Down", nullptr));
        trackMoveDownAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Move Down", nullptr));
#if QT_CONFIG(tooltip)
        trackMoveDownAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Move down", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        trackMoveDownAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Move current track down", nullptr));
#endif // QT_CONFIG(statustip)
        trackMoveBottomAction->setText(QCoreApplication::translate("qtractorMainForm", "&Bottom", nullptr));
        trackMoveBottomAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Move Bottom", nullptr));
#if QT_CONFIG(tooltip)
        trackMoveBottomAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Move bottom", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        trackMoveBottomAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Move current track to bottom", nullptr));
#endif // QT_CONFIG(statustip)
        trackHeightUpAction->setText(QCoreApplication::translate("qtractorMainForm", "&Increase", nullptr));
        trackHeightUpAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Increase Height", nullptr));
#if QT_CONFIG(tooltip)
        trackHeightUpAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Increase height", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        trackHeightUpAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Increase track height", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        trackHeightUpAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "Ctrl+Shift++", nullptr));
#endif // QT_CONFIG(shortcut)
        trackHeightDownAction->setText(QCoreApplication::translate("qtractorMainForm", "&Decrease", nullptr));
        trackHeightDownAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Decrease Height", nullptr));
#if QT_CONFIG(tooltip)
        trackHeightDownAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Decrease height", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        trackHeightDownAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Decrease track height", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        trackHeightDownAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "Ctrl+Shift+-", nullptr));
#endif // QT_CONFIG(shortcut)
        trackHeightResetAction->setText(QCoreApplication::translate("qtractorMainForm", "&Reset", nullptr));
        trackHeightResetAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Height Reset", nullptr));
#if QT_CONFIG(tooltip)
        trackHeightResetAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Height reset", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        trackHeightResetAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Reset track height", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        trackHeightResetAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "Ctrl+Shift+1", nullptr));
#endif // QT_CONFIG(shortcut)
        trackAutoMonitorAction->setText(QCoreApplication::translate("qtractorMainForm", "Auto &Monitor", nullptr));
        trackAutoMonitorAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Auto Monitor", nullptr));
#if QT_CONFIG(tooltip)
        trackAutoMonitorAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Auto monitor", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        trackAutoMonitorAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Auto-monitor current track", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        trackAutoMonitorAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "F6", nullptr));
#endif // QT_CONFIG(shortcut)
        trackAutoDeactivateAction->setText(QCoreApplication::translate("qtractorMainForm", "Auto Dea&ctivate", nullptr));
        trackAutoDeactivateAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Auto Deactivate", nullptr));
#if QT_CONFIG(tooltip)
        trackAutoDeactivateAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Auto-deactivate plugins", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        trackAutoDeactivateAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Auto-deactivate plugins not producing sound", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        trackAutoDeactivateAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "Shift+F6", nullptr));
#endif // QT_CONFIG(shortcut)
        trackImportAudioAction->setText(QCoreApplication::translate("qtractorMainForm", "&Audio...", nullptr));
        trackImportAudioAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Inport Audio File", nullptr));
#if QT_CONFIG(tooltip)
        trackImportAudioAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Import Audio file", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        trackImportAudioAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Import tracks from Audio file", nullptr));
#endif // QT_CONFIG(statustip)
        trackImportMidiAction->setText(QCoreApplication::translate("qtractorMainForm", "&MIDI...", nullptr));
        trackImportMidiAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Import MIDI File", nullptr));
#if QT_CONFIG(tooltip)
        trackImportMidiAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Import MIDI file", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        trackImportMidiAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Import tracks from MIDI file", nullptr));
#endif // QT_CONFIG(statustip)
        trackExportAudioAction->setText(QCoreApplication::translate("qtractorMainForm", "&Audio...", nullptr));
        trackExportAudioAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Export Audio File", nullptr));
#if QT_CONFIG(tooltip)
        trackExportAudioAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Export Audio file", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        trackExportAudioAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Export tracks to Audio file", nullptr));
#endif // QT_CONFIG(statustip)
        trackExportMidiAction->setText(QCoreApplication::translate("qtractorMainForm", "&MIDI...", nullptr));
        trackExportMidiAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Export MIDI File", nullptr));
#if QT_CONFIG(tooltip)
        trackExportMidiAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Export MIDI file", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        trackExportMidiAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Export tracks to MIDI file", nullptr));
#endif // QT_CONFIG(statustip)
        trackCurveLogarithmicAction->setText(QCoreApplication::translate("qtractorMainForm", "Log&arithmic", nullptr));
        trackCurveLogarithmicAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Automation logarithmic", nullptr));
#if QT_CONFIG(tooltip)
        trackCurveLogarithmicAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Automation logarithmic", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        trackCurveLogarithmicAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Automation curve logarithmic scale", nullptr));
#endif // QT_CONFIG(statustip)
        trackCurveColorAction->setText(QCoreApplication::translate("qtractorMainForm", "C&olor...", nullptr));
        trackCurveColorAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Automation color", nullptr));
#if QT_CONFIG(tooltip)
        trackCurveColorAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Automation color", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        trackCurveColorAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Automation curve color", nullptr));
#endif // QT_CONFIG(statustip)
        trackCurveLockedAction->setText(QCoreApplication::translate("qtractorMainForm", "&Lock", nullptr));
        trackCurveLockedAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Automation lock", nullptr));
#if QT_CONFIG(tooltip)
        trackCurveLockedAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Automation lock", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        trackCurveLockedAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Lock automation curve", nullptr));
#endif // QT_CONFIG(statustip)
        trackCurveProcessAction->setText(QCoreApplication::translate("qtractorMainForm", "&Play", nullptr));
        trackCurveProcessAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Automation playback", nullptr));
#if QT_CONFIG(tooltip)
        trackCurveProcessAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Automation playback", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        trackCurveProcessAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Playback automation curve", nullptr));
#endif // QT_CONFIG(statustip)
        trackCurveCaptureAction->setText(QCoreApplication::translate("qtractorMainForm", "&Record", nullptr));
        trackCurveCaptureAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Automation record", nullptr));
#if QT_CONFIG(tooltip)
        trackCurveCaptureAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Automation record", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        trackCurveCaptureAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Record automation curve", nullptr));
#endif // QT_CONFIG(statustip)
        trackCurveClearAction->setText(QCoreApplication::translate("qtractorMainForm", "&Clear", nullptr));
        trackCurveClearAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Automation clear", nullptr));
#if QT_CONFIG(tooltip)
        trackCurveClearAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Automation clear", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        trackCurveClearAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Clear automation curve", nullptr));
#endif // QT_CONFIG(statustip)
        trackCurveLockedAllAction->setText(QCoreApplication::translate("qtractorMainForm", "Loc&k All", nullptr));
        trackCurveLockedAllAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Automation lock all", nullptr));
#if QT_CONFIG(tooltip)
        trackCurveLockedAllAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Automation lock all", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        trackCurveLockedAllAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Lock all automation curves", nullptr));
#endif // QT_CONFIG(statustip)
        trackCurveProcessAllAction->setText(QCoreApplication::translate("qtractorMainForm", "Play &All", nullptr));
        trackCurveProcessAllAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Automation playback all", nullptr));
#if QT_CONFIG(tooltip)
        trackCurveProcessAllAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Automation playback all", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        trackCurveProcessAllAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Playback all automation curves", nullptr));
#endif // QT_CONFIG(statustip)
        trackCurveCaptureAllAction->setText(QCoreApplication::translate("qtractorMainForm", "Rec&ord All", nullptr));
        trackCurveCaptureAllAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Automation record all", nullptr));
#if QT_CONFIG(tooltip)
        trackCurveCaptureAllAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Automation record all", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        trackCurveCaptureAllAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Record all automation curves", nullptr));
#endif // QT_CONFIG(statustip)
        trackCurveClearAllAction->setText(QCoreApplication::translate("qtractorMainForm", "C&lear All", nullptr));
        trackCurveClearAllAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Automation clear all", nullptr));
#if QT_CONFIG(tooltip)
        trackCurveClearAllAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Automation clear all", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        trackCurveClearAllAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Clear all automation curves", nullptr));
#endif // QT_CONFIG(statustip)
        clipNewAction->setText(QCoreApplication::translate("qtractorMainForm", "&New...", nullptr));
        clipNewAction->setIconText(QCoreApplication::translate("qtractorMainForm", "New Clip", nullptr));
#if QT_CONFIG(tooltip)
        clipNewAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "New clip", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        clipNewAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Create new clip", nullptr));
#endif // QT_CONFIG(statustip)
        clipEditAction->setText(QCoreApplication::translate("qtractorMainForm", "&Edit...", nullptr));
        clipEditAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Edit Clip", nullptr));
#if QT_CONFIG(tooltip)
        clipEditAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Edit clip", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        clipEditAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Edit current clip", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        clipEditAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "F4", nullptr));
#endif // QT_CONFIG(shortcut)
        clipUnlinkAction->setText(QCoreApplication::translate("qtractorMainForm", "&Unlink", nullptr));
        clipUnlinkAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Unlink Clip", nullptr));
#if QT_CONFIG(tooltip)
        clipUnlinkAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Unlink clip", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        clipUnlinkAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Unlink current clip", nullptr));
#endif // QT_CONFIG(statustip)
        clipRecordExAction->setText(QCoreApplication::translate("qtractorMainForm", "Recor&d", nullptr));
        clipRecordExAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Record Clip", nullptr));
#if QT_CONFIG(tooltip)
        clipRecordExAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Record clip", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        clipRecordExAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Record current clip (overdub)", nullptr));
#endif // QT_CONFIG(statustip)
        clipSplitAction->setText(QCoreApplication::translate("qtractorMainForm", "&Split", nullptr));
        clipSplitAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Split Clip", nullptr));
#if QT_CONFIG(tooltip)
        clipSplitAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Split clip", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        clipSplitAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Split current clip at playhead", nullptr));
#endif // QT_CONFIG(statustip)
        clipMergeAction->setText(QCoreApplication::translate("qtractorMainForm", "&Merge...", nullptr));
        clipMergeAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Merge Clips", nullptr));
#if QT_CONFIG(tooltip)
        clipMergeAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Merge clips", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        clipMergeAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Merge selected clips", nullptr));
#endif // QT_CONFIG(statustip)
        clipNormalizeAction->setText(QCoreApplication::translate("qtractorMainForm", "Normali&ze", nullptr));
        clipNormalizeAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Normalize Clip", nullptr));
#if QT_CONFIG(tooltip)
        clipNormalizeAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Normalize clip", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        clipNormalizeAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Normalize current clip (gain/volume)", nullptr));
#endif // QT_CONFIG(statustip)
        clipToolsQuantizeAction->setText(QCoreApplication::translate("qtractorMainForm", "&Quantize...", nullptr));
        clipToolsQuantizeAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Quantize Clip", nullptr));
#if QT_CONFIG(tooltip)
        clipToolsQuantizeAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Quantize clip events", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        clipToolsQuantizeAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Quantize current MIDI clip events", nullptr));
#endif // QT_CONFIG(statustip)
        clipToolsTransposeAction->setText(QCoreApplication::translate("qtractorMainForm", "&Transpose...", nullptr));
        clipToolsTransposeAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Transpose Clip", nullptr));
#if QT_CONFIG(tooltip)
        clipToolsTransposeAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Transpose clip events", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        clipToolsTransposeAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Transpose current MIDI clip events", nullptr));
#endif // QT_CONFIG(statustip)
        clipToolsNormalizeAction->setText(QCoreApplication::translate("qtractorMainForm", "&Normalize...", nullptr));
        clipToolsNormalizeAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Normalize Clip", nullptr));
#if QT_CONFIG(tooltip)
        clipToolsNormalizeAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Normalize clip events", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        clipToolsNormalizeAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Normalize current MIDI clip events", nullptr));
#endif // QT_CONFIG(statustip)
        clipToolsRandomizeAction->setText(QCoreApplication::translate("qtractorMainForm", "&Randomize...", nullptr));
        clipToolsRandomizeAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Randomize Clip", nullptr));
#if QT_CONFIG(tooltip)
        clipToolsRandomizeAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Randomize clip events", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        clipToolsRandomizeAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Randomize current MIDI clip events", nullptr));
#endif // QT_CONFIG(statustip)
        clipToolsResizeAction->setText(QCoreApplication::translate("qtractorMainForm", "Resi&ze...", nullptr));
        clipToolsResizeAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Resize Clip", nullptr));
#if QT_CONFIG(tooltip)
        clipToolsResizeAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Resize clip events", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        clipToolsResizeAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Resize current MIDI clip events", nullptr));
#endif // QT_CONFIG(statustip)
        clipToolsRescaleAction->setText(QCoreApplication::translate("qtractorMainForm", "Re&scale...", nullptr));
        clipToolsRescaleAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Rescale Clip", nullptr));
#if QT_CONFIG(tooltip)
        clipToolsRescaleAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Rescale clip events", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        clipToolsRescaleAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Rescale current MIDI clip events", nullptr));
#endif // QT_CONFIG(statustip)
        clipToolsTimeshiftAction->setText(QCoreApplication::translate("qtractorMainForm", "T&imeshift...", nullptr));
        clipToolsTimeshiftAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Timeshift Clip", nullptr));
#if QT_CONFIG(tooltip)
        clipToolsTimeshiftAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Timeshift clip events", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        clipToolsTimeshiftAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Timeshift current MIDI clip events", nullptr));
#endif // QT_CONFIG(statustip)
        clipTempoAdjustAction->setText(QCoreApplication::translate("qtractorMainForm", "&Tempo Adjust...", nullptr));
        clipTempoAdjustAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Tempo Adjust", nullptr));
#if QT_CONFIG(tooltip)
        clipTempoAdjustAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Tempo Adjust", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        clipTempoAdjustAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Adjust session tempo from current clip selection", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        clipTempoAdjustAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "F7", nullptr));
#endif // QT_CONFIG(shortcut)
        clipCrossFadeAction->setText(QCoreApplication::translate("qtractorMainForm", "&Cross Fade", nullptr));
        clipCrossFadeAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Clip Cross-fade", nullptr));
#if QT_CONFIG(tooltip)
        clipCrossFadeAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Clip cross-fade", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        clipCrossFadeAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Cross-fade current overlapped clips", nullptr));
#endif // QT_CONFIG(statustip)
        clipRangeSetAction->setText(QCoreApplication::translate("qtractorMainForm", "&Range Set", nullptr));
        clipRangeSetAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Clip Range", nullptr));
#if QT_CONFIG(tooltip)
        clipRangeSetAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Clip range", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        clipRangeSetAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Set edit-range from current clip extents", nullptr));
#endif // QT_CONFIG(statustip)
        clipLoopSetAction->setText(QCoreApplication::translate("qtractorMainForm", "&Loop Set", nullptr));
        clipLoopSetAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Clip Loop", nullptr));
#if QT_CONFIG(tooltip)
        clipLoopSetAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Clip loop", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        clipLoopSetAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Set loop-range from current clip extents", nullptr));
#endif // QT_CONFIG(statustip)
        clipImportAction->setText(QCoreApplication::translate("qtractorMainForm", "&Import...", nullptr));
        clipImportAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Import Clip", nullptr));
#if QT_CONFIG(tooltip)
        clipImportAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Import clip", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        clipImportAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Import clip from file(s)", nullptr));
#endif // QT_CONFIG(statustip)
        clipExportAction->setText(QCoreApplication::translate("qtractorMainForm", "E&xport...", nullptr));
        clipExportAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Export Clip", nullptr));
#if QT_CONFIG(tooltip)
        clipExportAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Export clip", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        clipExportAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Export current clip to file", nullptr));
#endif // QT_CONFIG(statustip)
        clipTakeFirstAction->setText(QCoreApplication::translate("qtractorMainForm", "&First", nullptr));
        clipTakeFirstAction->setIconText(QCoreApplication::translate("qtractorMainForm", "First Take", nullptr));
#if QT_CONFIG(tooltip)
        clipTakeFirstAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "First take", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        clipTakeFirstAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Select current clip first take", nullptr));
#endif // QT_CONFIG(statustip)
        clipTakePrevAction->setText(QCoreApplication::translate("qtractorMainForm", "&Previous", nullptr));
        clipTakePrevAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Previous Take", nullptr));
#if QT_CONFIG(tooltip)
        clipTakePrevAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Previous take", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        clipTakePrevAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Select current clip previous take", nullptr));
#endif // QT_CONFIG(statustip)
        clipTakeNextAction->setText(QCoreApplication::translate("qtractorMainForm", "&Next", nullptr));
        clipTakeNextAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Next Take", nullptr));
#if QT_CONFIG(tooltip)
        clipTakeNextAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Next take", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        clipTakeNextAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Select current clip next take", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        clipTakeNextAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "Shift+T", nullptr));
#endif // QT_CONFIG(shortcut)
        clipTakeLastAction->setText(QCoreApplication::translate("qtractorMainForm", "&Last", nullptr));
        clipTakeLastAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Last Take", nullptr));
#if QT_CONFIG(tooltip)
        clipTakeLastAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Last take", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        clipTakeLastAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Select current clip last take", nullptr));
#endif // QT_CONFIG(statustip)
        clipTakeResetAction->setText(QCoreApplication::translate("qtractorMainForm", "&Reset", nullptr));
        clipTakeResetAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Reset Takes", nullptr));
#if QT_CONFIG(tooltip)
        clipTakeResetAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Reset takes", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        clipTakeResetAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Reset (unfold) current clip takes", nullptr));
#endif // QT_CONFIG(statustip)
        clipTakeRangeAction->setText(QCoreApplication::translate("qtractorMainForm", "R&ange...", nullptr));
        clipTakeRangeAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Take Range", nullptr));
#if QT_CONFIG(tooltip)
        clipTakeRangeAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Take range", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        clipTakeRangeAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Range (fold) current clip into takes", nullptr));
#endif // QT_CONFIG(statustip)
        viewMenubarAction->setText(QCoreApplication::translate("qtractorMainForm", "&Menubar", nullptr));
        viewMenubarAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Menubar", nullptr));
#if QT_CONFIG(tooltip)
        viewMenubarAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Menubar", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewMenubarAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Show/hide the main program window menubar", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        viewMenubarAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "Ctrl+M", nullptr));
#endif // QT_CONFIG(shortcut)
        viewStatusbarAction->setText(QCoreApplication::translate("qtractorMainForm", "&Statusbar", nullptr));
        viewStatusbarAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Statusbar", nullptr));
#if QT_CONFIG(tooltip)
        viewStatusbarAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Statusbar", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewStatusbarAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Show/hide the main program window statusbar", nullptr));
#endif // QT_CONFIG(statustip)
        viewToolbarFileAction->setText(QCoreApplication::translate("qtractorMainForm", "&File", nullptr));
        viewToolbarFileAction->setIconText(QCoreApplication::translate("qtractorMainForm", "File Toolbar", nullptr));
#if QT_CONFIG(tooltip)
        viewToolbarFileAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "File toolbar", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewToolbarFileAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Show/hide main program window file toolbar", nullptr));
#endif // QT_CONFIG(statustip)
        viewToolbarEditAction->setText(QCoreApplication::translate("qtractorMainForm", "&Edit", nullptr));
        viewToolbarEditAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Edit Toolbar", nullptr));
#if QT_CONFIG(tooltip)
        viewToolbarEditAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Edit toolbar", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewToolbarEditAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Show/hide main program window edit toolbar", nullptr));
#endif // QT_CONFIG(statustip)
        viewToolbarTrackAction->setText(QCoreApplication::translate("qtractorMainForm", "&Track", nullptr));
        viewToolbarTrackAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Track Toolbar", nullptr));
#if QT_CONFIG(tooltip)
        viewToolbarTrackAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Track toolbar", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewToolbarTrackAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Show/hide main program window track toolbar", nullptr));
#endif // QT_CONFIG(statustip)
        viewToolbarViewAction->setText(QCoreApplication::translate("qtractorMainForm", "&View", nullptr));
        viewToolbarViewAction->setIconText(QCoreApplication::translate("qtractorMainForm", "View Toolbar", nullptr));
#if QT_CONFIG(tooltip)
        viewToolbarViewAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "View toolbar", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewToolbarViewAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Show/hide main program window view toolbar", nullptr));
#endif // QT_CONFIG(statustip)
        viewToolbarOptionsAction->setText(QCoreApplication::translate("qtractorMainForm", "&Options", nullptr));
        viewToolbarOptionsAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Options Toolbar", nullptr));
#if QT_CONFIG(tooltip)
        viewToolbarOptionsAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Options toolbar", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewToolbarOptionsAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Show/hide main program window options toolbar", nullptr));
#endif // QT_CONFIG(statustip)
        viewToolbarTransportAction->setText(QCoreApplication::translate("qtractorMainForm", "T&ransport", nullptr));
        viewToolbarTransportAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Transport Toolbar", nullptr));
#if QT_CONFIG(tooltip)
        viewToolbarTransportAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Transport toolbar", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewToolbarTransportAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Show/hide main program window transport toolbar", nullptr));
#endif // QT_CONFIG(statustip)
        viewToolbarTimeAction->setText(QCoreApplication::translate("qtractorMainForm", "T&ime", nullptr));
        viewToolbarTimeAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Time Toolbar", nullptr));
#if QT_CONFIG(tooltip)
        viewToolbarTimeAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Time toolbar", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewToolbarTimeAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Show/hide main program window time toolbar", nullptr));
#endif // QT_CONFIG(statustip)
        viewToolbarThumbAction->setText(QCoreApplication::translate("qtractorMainForm", "Thum&b", nullptr));
        viewToolbarThumbAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Thumb Toolbar", nullptr));
#if QT_CONFIG(tooltip)
        viewToolbarThumbAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Thumb toolbar", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewToolbarThumbAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Show/hide main program window thumb toolbar", nullptr));
#endif // QT_CONFIG(statustip)
        viewFileSystemAction->setText(QCoreApplication::translate("qtractorMainForm", "File &System", nullptr));
        viewFileSystemAction->setIconText(QCoreApplication::translate("qtractorMainForm", "File System", nullptr));
#if QT_CONFIG(tooltip)
        viewFileSystemAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "File system", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewFileSystemAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Show/hide the file system window", nullptr));
#endif // QT_CONFIG(statustip)
        viewFilesAction->setText(QCoreApplication::translate("qtractorMainForm", "&Files", nullptr));
        viewFilesAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Files", nullptr));
#if QT_CONFIG(tooltip)
        viewFilesAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Files", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewFilesAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Show/hide the files window", nullptr));
#endif // QT_CONFIG(statustip)
        viewMessagesAction->setText(QCoreApplication::translate("qtractorMainForm", "M&essages", nullptr));
        viewMessagesAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Messages", nullptr));
#if QT_CONFIG(tooltip)
        viewMessagesAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Messages", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewMessagesAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Show/hide the messages window", nullptr));
#endif // QT_CONFIG(statustip)
        viewConnectionsAction->setText(QCoreApplication::translate("qtractorMainForm", "&Connections", nullptr));
        viewConnectionsAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Connections", nullptr));
#if QT_CONFIG(tooltip)
        viewConnectionsAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Connections", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewConnectionsAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Show/hide the connections window", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        viewConnectionsAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "F8", nullptr));
#endif // QT_CONFIG(shortcut)
        viewMixerAction->setText(QCoreApplication::translate("qtractorMainForm", "Mi&xer", nullptr));
        viewMixerAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Mixer", nullptr));
#if QT_CONFIG(tooltip)
        viewMixerAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Mixer", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewMixerAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Show/hide the mixer window", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        viewMixerAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "F9", nullptr));
#endif // QT_CONFIG(shortcut)
        viewZoomInAction->setText(QCoreApplication::translate("qtractorMainForm", "&In", nullptr));
        viewZoomInAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Zoom In", nullptr));
#if QT_CONFIG(tooltip)
        viewZoomInAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Zoom in", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewZoomInAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Zoom in", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        viewZoomInAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "Ctrl++", nullptr));
#endif // QT_CONFIG(shortcut)
        viewZoomOutAction->setText(QCoreApplication::translate("qtractorMainForm", "&Out", nullptr));
        viewZoomOutAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Zoom Out", nullptr));
#if QT_CONFIG(tooltip)
        viewZoomOutAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Zoom out", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewZoomOutAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Zoom out", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        viewZoomOutAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "Ctrl+-", nullptr));
#endif // QT_CONFIG(shortcut)
        viewZoomResetAction->setText(QCoreApplication::translate("qtractorMainForm", "&Reset", nullptr));
        viewZoomResetAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Zoom Reset", nullptr));
#if QT_CONFIG(tooltip)
        viewZoomResetAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Zoom reset", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewZoomResetAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Zoom reset", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        viewZoomResetAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "Ctrl+1", nullptr));
#endif // QT_CONFIG(shortcut)
        viewZoomHorizontalAction->setText(QCoreApplication::translate("qtractorMainForm", "&Horizontal", nullptr));
        viewZoomHorizontalAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Horizontal Zoom", nullptr));
#if QT_CONFIG(tooltip)
        viewZoomHorizontalAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Horizontal zoom", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewZoomHorizontalAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Horizontal zoom mode", nullptr));
#endif // QT_CONFIG(statustip)
        viewZoomVerticalAction->setText(QCoreApplication::translate("qtractorMainForm", "&Vertical", nullptr));
        viewZoomVerticalAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Vertical Zoom", nullptr));
#if QT_CONFIG(tooltip)
        viewZoomVerticalAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Vertical zoom", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewZoomVerticalAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Vertical zoom mode", nullptr));
#endif // QT_CONFIG(statustip)
        viewZoomAllAction->setText(QCoreApplication::translate("qtractorMainForm", "&All", nullptr));
        viewZoomAllAction->setIconText(QCoreApplication::translate("qtractorMainForm", "All Zoom", nullptr));
#if QT_CONFIG(tooltip)
        viewZoomAllAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "All zoom", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewZoomAllAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "All zoom mode", nullptr));
#endif // QT_CONFIG(statustip)
        viewSnapGridAction->setText(QCoreApplication::translate("qtractorMainForm", "&Grid", nullptr));
        viewSnapGridAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Grid", nullptr));
#if QT_CONFIG(tooltip)
        viewSnapGridAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Grid", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewSnapGridAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Snap grid view mode", nullptr));
#endif // QT_CONFIG(statustip)
        viewSnapZebraAction->setText(QCoreApplication::translate("qtractorMainForm", "&Zebra", nullptr));
        viewSnapZebraAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Zebra", nullptr));
#if QT_CONFIG(tooltip)
        viewSnapZebraAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Zebra", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewSnapZebraAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Bar zebra view mode", nullptr));
#endif // QT_CONFIG(statustip)
        viewToolTipsAction->setText(QCoreApplication::translate("qtractorMainForm", "Too&l Tips", nullptr));
        viewToolTipsAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Tool tips", nullptr));
#if QT_CONFIG(tooltip)
        viewToolTipsAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Tool tips", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewToolTipsAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Floating tool tips view mode", nullptr));
#endif // QT_CONFIG(statustip)
        viewRefreshAction->setText(QCoreApplication::translate("qtractorMainForm", "&Refresh", nullptr));
        viewRefreshAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Refresh", nullptr));
#if QT_CONFIG(tooltip)
        viewRefreshAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Refresh", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewRefreshAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Refresh views", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        viewRefreshAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "F5", nullptr));
#endif // QT_CONFIG(shortcut)
        viewInstrumentsAction->setText(QCoreApplication::translate("qtractorMainForm", "&Instruments...", nullptr));
        viewInstrumentsAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Instruments", nullptr));
#if QT_CONFIG(tooltip)
        viewInstrumentsAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Instruments", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewInstrumentsAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Change instrument definitions and files", nullptr));
#endif // QT_CONFIG(statustip)
        viewControllersAction->setText(QCoreApplication::translate("qtractorMainForm", "&Controllers...", nullptr));
        viewControllersAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Controllers", nullptr));
#if QT_CONFIG(tooltip)
        viewControllersAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Controllers", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewControllersAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Change MIDI controllers configuration", nullptr));
#endif // QT_CONFIG(statustip)
        viewBusesAction->setText(QCoreApplication::translate("qtractorMainForm", "&Buses...", nullptr));
        viewBusesAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Buses", nullptr));
#if QT_CONFIG(tooltip)
        viewBusesAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Buses", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewBusesAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Change session bus definitions", nullptr));
#endif // QT_CONFIG(statustip)
        viewTempoMapAction->setText(QCoreApplication::translate("qtractorMainForm", "Tempo M&ap / Markers...", nullptr));
        viewTempoMapAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Tempo Map / Markers", nullptr));
#if QT_CONFIG(tooltip)
        viewTempoMapAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Tempo map / markers", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewTempoMapAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Change session tempo map / markers", nullptr));
#endif // QT_CONFIG(statustip)
        viewOptionsAction->setText(QCoreApplication::translate("qtractorMainForm", "&Options...", nullptr));
        viewOptionsAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Options", nullptr));
#if QT_CONFIG(tooltip)
        viewOptionsAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Options", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewOptionsAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Change general application program options", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        viewOptionsAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "F12", nullptr));
#endif // QT_CONFIG(shortcut)
        transportBackwardAction->setText(QCoreApplication::translate("qtractorMainForm", "&Backward", nullptr));
        transportBackwardAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Backward", nullptr));
#if QT_CONFIG(tooltip)
        transportBackwardAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Backward", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        transportBackwardAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Transport backward", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        transportBackwardAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "Backspace", nullptr));
#endif // QT_CONFIG(shortcut)
        transportRewindAction->setText(QCoreApplication::translate("qtractorMainForm", "Re&wind", nullptr));
        transportRewindAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Rewind", nullptr));
#if QT_CONFIG(tooltip)
        transportRewindAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Rewind", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        transportRewindAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Transport rewind", nullptr));
#endif // QT_CONFIG(statustip)
        transportFastForwardAction->setText(QCoreApplication::translate("qtractorMainForm", "F&ast Forward", nullptr));
        transportFastForwardAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Fast Forward", nullptr));
#if QT_CONFIG(tooltip)
        transportFastForwardAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Fast forward", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        transportFastForwardAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Transport fast forward", nullptr));
#endif // QT_CONFIG(statustip)
        transportForwardAction->setText(QCoreApplication::translate("qtractorMainForm", "&Forward", nullptr));
        transportForwardAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Forward", nullptr));
#if QT_CONFIG(tooltip)
        transportForwardAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Forward", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        transportForwardAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Transport forward", nullptr));
#endif // QT_CONFIG(statustip)
        transportLoopAction->setText(QCoreApplication::translate("qtractorMainForm", "&Loop", nullptr));
        transportLoopAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Loop", nullptr));
#if QT_CONFIG(tooltip)
        transportLoopAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Loop", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        transportLoopAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Transport loop", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        transportLoopAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "Ctrl+Shift+L", nullptr));
#endif // QT_CONFIG(shortcut)
        transportLoopSetAction->setText(QCoreApplication::translate("qtractorMainForm", "Loop &Set", nullptr));
        transportLoopSetAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Loop Set", nullptr));
#if QT_CONFIG(tooltip)
        transportLoopSetAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Loop set", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        transportLoopSetAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Transport loop set", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        transportLoopSetAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        transportStopAction->setText(QCoreApplication::translate("qtractorMainForm", "&Stop", nullptr));
        transportStopAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Stop", nullptr));
#if QT_CONFIG(tooltip)
        transportStopAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Stop", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        transportStopAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Transport stop", nullptr));
#endif // QT_CONFIG(statustip)
        transportPlayAction->setText(QCoreApplication::translate("qtractorMainForm", "&Play", nullptr));
        transportPlayAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Play", nullptr));
#if QT_CONFIG(tooltip)
        transportPlayAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Play", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        transportPlayAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Transport play/pause", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        transportPlayAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "Space", nullptr));
#endif // QT_CONFIG(shortcut)
        transportRecordAction->setText(QCoreApplication::translate("qtractorMainForm", "&Record", nullptr));
        transportRecordAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Record", nullptr));
#if QT_CONFIG(tooltip)
        transportRecordAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Record", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        transportRecordAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Transport record", nullptr));
#endif // QT_CONFIG(statustip)
        transportPunchAction->setText(QCoreApplication::translate("qtractorMainForm", "&Punch", nullptr));
        transportPunchAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Punch", nullptr));
#if QT_CONFIG(tooltip)
        transportPunchAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Punch in/out", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        transportPunchAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Transport punch in/out", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        transportPunchAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "Ctrl+Shift+P", nullptr));
#endif // QT_CONFIG(shortcut)
        transportPunchSetAction->setText(QCoreApplication::translate("qtractorMainForm", "Punch Se&t", nullptr));
        transportPunchSetAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Punch Set", nullptr));
#if QT_CONFIG(tooltip)
        transportPunchSetAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Punch in/out set", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        transportPunchSetAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Transport punch in/out set", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        transportPunchSetAction->setShortcut(QCoreApplication::translate("qtractorMainForm", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        transportCountInAction->setText(QCoreApplication::translate("qtractorMainForm", "&Count-in", nullptr));
        transportCountInAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Count-in", nullptr));
#if QT_CONFIG(tooltip)
        transportCountInAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Count-in", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        transportCountInAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Count-in", nullptr));
#endif // QT_CONFIG(statustip)
        transportMetroAction->setText(QCoreApplication::translate("qtractorMainForm", "&Metronome", nullptr));
        transportMetroAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Metronome", nullptr));
#if QT_CONFIG(tooltip)
        transportMetroAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Metronome", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        transportMetroAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Metronome", nullptr));
#endif // QT_CONFIG(statustip)
        transportFollowAction->setText(QCoreApplication::translate("qtractorMainForm", "F&ollow Playhead", nullptr));
        transportFollowAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Follow Playhead", nullptr));
#if QT_CONFIG(tooltip)
        transportFollowAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Follow playhead", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        transportFollowAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Follow playhead", nullptr));
#endif // QT_CONFIG(statustip)
        transportAutoBackwardAction->setText(QCoreApplication::translate("qtractorMainForm", "A&uto Backward", nullptr));
        transportAutoBackwardAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Auto Backward", nullptr));
#if QT_CONFIG(tooltip)
        transportAutoBackwardAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Auto backward", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        transportAutoBackwardAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Auto backward", nullptr));
#endif // QT_CONFIG(statustip)
        transportContinueAction->setText(QCoreApplication::translate("qtractorMainForm", "&Continue Past End", nullptr));
        transportContinueAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Continue Past End", nullptr));
#if QT_CONFIG(tooltip)
        transportContinueAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Continue past end", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        transportContinueAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Continue past end", nullptr));
#endif // QT_CONFIG(statustip)
        transportModeNoneAction->setText(QCoreApplication::translate("qtractorMainForm", "&None", nullptr));
        transportModeNoneAction->setIconText(QCoreApplication::translate("qtractorMainForm", "None", nullptr));
#if QT_CONFIG(tooltip)
        transportModeNoneAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Transport mode: None", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        transportModeNoneAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Transport mode set to None", nullptr));
#endif // QT_CONFIG(statustip)
        transportModeSlaveAction->setText(QCoreApplication::translate("qtractorMainForm", "&Slave", nullptr));
        transportModeSlaveAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Slave", nullptr));
#if QT_CONFIG(tooltip)
        transportModeSlaveAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Transport mode: Slave", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        transportModeSlaveAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Transport mode set to Slave", nullptr));
#endif // QT_CONFIG(statustip)
        transportModeMasterAction->setText(QCoreApplication::translate("qtractorMainForm", "&Master", nullptr));
        transportModeMasterAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Master", nullptr));
#if QT_CONFIG(tooltip)
        transportModeMasterAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Transport mode: Master", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        transportModeMasterAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Transport mode set to Master", nullptr));
#endif // QT_CONFIG(statustip)
        transportModeFullAction->setText(QCoreApplication::translate("qtractorMainForm", "&Full", nullptr));
        transportModeFullAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Full", nullptr));
#if QT_CONFIG(tooltip)
        transportModeFullAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Transport mode: Full", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        transportModeFullAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Transport mode set to Full", nullptr));
#endif // QT_CONFIG(statustip)
        transportPanicAction->setText(QCoreApplication::translate("qtractorMainForm", "Pa&nic", nullptr));
        transportPanicAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Panic", nullptr));
#if QT_CONFIG(tooltip)
        transportPanicAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Panic", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        transportPanicAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "All MIDI tracks shut off (panic)", nullptr));
#endif // QT_CONFIG(statustip)
        helpShortcutsAction->setText(QCoreApplication::translate("qtractorMainForm", "&Shortcuts...", nullptr));
        helpShortcutsAction->setIconText(QCoreApplication::translate("qtractorMainForm", "Shortcuts", nullptr));
#if QT_CONFIG(tooltip)
        helpShortcutsAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "Shortcuts", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        helpShortcutsAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Keyboard shortcuts", nullptr));
#endif // QT_CONFIG(statustip)
        helpAboutAction->setText(QCoreApplication::translate("qtractorMainForm", "&About...", nullptr));
        helpAboutAction->setIconText(QCoreApplication::translate("qtractorMainForm", "About", nullptr));
#if QT_CONFIG(tooltip)
        helpAboutAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "About", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        helpAboutAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Show information about this application program", nullptr));
#endif // QT_CONFIG(statustip)
        helpAboutQtAction->setText(QCoreApplication::translate("qtractorMainForm", "About &Qt...", nullptr));
        helpAboutQtAction->setIconText(QCoreApplication::translate("qtractorMainForm", "About Qt", nullptr));
#if QT_CONFIG(tooltip)
        helpAboutQtAction->setToolTip(QCoreApplication::translate("qtractorMainForm", "About Qt", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        helpAboutQtAction->setStatusTip(QCoreApplication::translate("qtractorMainForm", "Show information about the Qt toolkit", nullptr));
#endif // QT_CONFIG(statustip)
        fileMenu->setTitle(QCoreApplication::translate("qtractorMainForm", "&File", nullptr));
        fileOpenRecentMenu->setTitle(QCoreApplication::translate("qtractorMainForm", "Open &Recent", nullptr));
        trackMenu->setTitle(QCoreApplication::translate("qtractorMainForm", "&Track", nullptr));
        trackStateMenu->setTitle(QCoreApplication::translate("qtractorMainForm", "&State", nullptr));
        trackNavigateMenu->setTitle(QCoreApplication::translate("qtractorMainForm", "&Navigate", nullptr));
        trackMoveMenu->setTitle(QCoreApplication::translate("qtractorMainForm", "Mo&ve", nullptr));
        trackHeightMenu->setTitle(QCoreApplication::translate("qtractorMainForm", "&Height", nullptr));
        trackImportMenu->setTitle(QCoreApplication::translate("qtractorMainForm", "Impor&t Tracks", nullptr));
        trackExportMenu->setTitle(QCoreApplication::translate("qtractorMainForm", "E&xport Tracks", nullptr));
        trackInstrumentMenu->setTitle(QCoreApplication::translate("qtractorMainForm", "Instrum&ent", nullptr));
        trackCurveMenu->setTitle(QCoreApplication::translate("qtractorMainForm", "A&utomation", nullptr));
        trackCurveSelectMenu->setTitle(QCoreApplication::translate("qtractorMainForm", "&Select", nullptr));
        trackCurveModeMenu->setTitle(QCoreApplication::translate("qtractorMainForm", "M&ode", nullptr));
        clipMenu->setTitle(QCoreApplication::translate("qtractorMainForm", "&Clip", nullptr));
        clipToolsMenu->setTitle(QCoreApplication::translate("qtractorMainForm", "T&ools", nullptr));
        clipTakeMenu->setTitle(QCoreApplication::translate("qtractorMainForm", "Ta&ke", nullptr));
        clipTakeSelectMenu->setTitle(QCoreApplication::translate("qtractorMainForm", "&Select", nullptr));
        editMenu->setTitle(QCoreApplication::translate("qtractorMainForm", "&Edit", nullptr));
        editSelectModeMenu->setTitle(QCoreApplication::translate("qtractorMainForm", "Select &Mode", nullptr));
        editSelectMenu->setTitle(QCoreApplication::translate("qtractorMainForm", "&Select", nullptr));
        editInsertMenu->setTitle(QCoreApplication::translate("qtractorMainForm", "I&nsert", nullptr));
        editRemoveMenu->setTitle(QCoreApplication::translate("qtractorMainForm", "Remo&ve", nullptr));
        viewMenu->setTitle(QCoreApplication::translate("qtractorMainForm", "&View", nullptr));
        viewToolbarsMenu->setTitle(QCoreApplication::translate("qtractorMainForm", "&Toolbars", nullptr));
        viewWindowsMenu->setTitle(QCoreApplication::translate("qtractorMainForm", "&Windows", nullptr));
        viewZoomMenu->setTitle(QCoreApplication::translate("qtractorMainForm", "&Zoom", nullptr));
        viewSnapMenu->setTitle(QCoreApplication::translate("qtractorMainForm", "S&nap", nullptr));
        transportMenu->setTitle(QCoreApplication::translate("qtractorMainForm", "T&ransport", nullptr));
        transportModeMenu->setTitle(QCoreApplication::translate("qtractorMainForm", "Mod&e", nullptr));
        helpMenu->setTitle(QCoreApplication::translate("qtractorMainForm", "&Help", nullptr));
        (void)qtractorMainForm;
    } // retranslateUi

};

namespace Ui {
    class qtractorMainForm: public Ui_qtractorMainForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTRACTORMAINFORM_H
