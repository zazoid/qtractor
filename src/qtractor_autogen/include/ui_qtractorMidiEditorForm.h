/*
qtractor - A MIDI/Audio multi-track sequencer.

   Copyright (C) 2005-2022, rncbc aka Rui Nuno Capela. All rights reserved.

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
** Form generated from reading UI file 'qtractorMidiEditorForm.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTRACTORMIDIEDITORFORM_H
#define UI_QTRACTORMIDIEDITORFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>

QT_BEGIN_NAMESPACE

class Ui_qtractorMidiEditorForm
{
public:
    QAction *fileSaveAction;
    QAction *fileSaveAsAction;
    QAction *fileUnlinkAction;
    QAction *fileRecordExAction;
    QAction *fileTrackInputsAction;
    QAction *fileTrackOutputsAction;
    QAction *fileTrackPropertiesAction;
    QAction *filePropertiesAction;
    QAction *fileRangeSetAction;
    QAction *fileLoopSetAction;
    QAction *fileCloseAction;
    QAction *editUndoAction;
    QAction *editRedoAction;
    QAction *editCutAction;
    QAction *editCopyAction;
    QAction *editPasteAction;
    QAction *editPasteRepeatAction;
    QAction *editDeleteAction;
    QAction *editModeOffAction;
    QAction *editModeOnAction;
    QAction *editModeDrawAction;
    QAction *editSelectAllAction;
    QAction *editSelectNoneAction;
    QAction *editSelectInvertAction;
    QAction *editSelectRangeAction;
    QAction *editInsertRangeAction;
    QAction *editRemoveRangeAction;
    QAction *toolsQuantizeAction;
    QAction *toolsTransposeAction;
    QAction *toolsNormalizeAction;
    QAction *toolsRandomizeAction;
    QAction *toolsResizeAction;
    QAction *toolsRescaleAction;
    QAction *toolsTimeshiftAction;
    QAction *viewMenubarAction;
    QAction *viewStatusbarAction;
    QAction *viewToolbarFileAction;
    QAction *viewToolbarEditAction;
    QAction *viewToolbarViewAction;
    QAction *viewToolbarTransportAction;
    QAction *viewToolbarTimeAction;
    QAction *viewToolbarScaleAction;
    QAction *viewToolbarThumbAction;
    QAction *viewEventsAction;
    QAction *viewNoteNamesAction;
    QAction *viewNoteDurationAction;
    QAction *viewNoteColorAction;
    QAction *viewDrumModeAction;
    QAction *viewValueColorAction;
    QAction *viewZoomInAction;
    QAction *viewZoomOutAction;
    QAction *viewZoomResetAction;
    QAction *viewZoomHorizontalAction;
    QAction *viewZoomVerticalAction;
    QAction *viewZoomAllAction;
    QAction *viewSnapZebraAction;
    QAction *viewSnapGridAction;
    QAction *viewToolTipsAction;
    QAction *viewRefreshAction;
    QAction *viewPreviewAction;
    QAction *viewFollowAction;
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
    QAction *transportPanicAction;
    QAction *helpShortcutsAction;
    QAction *helpAboutAction;
    QAction *helpAboutQtAction;
    QMenuBar *menuBar;
    QMenu *fileMenu;
    QMenu *fileTrackMenu;
    QMenu *fileTrackInstrumentMenu;
    QMenu *viewMenu;
    QMenu *viewToolbarsMenu;
    QMenu *viewWindowsMenu;
    QMenu *viewNoteTypeMenu;
    QMenu *viewValueTypeMenu;
    QMenu *viewGhostTrackMenu;
    QMenu *viewZoomMenu;
    QMenu *viewSnapMenu;
    QMenu *viewScaleMenu;
    QMenu *toolsMenu;
    QMenu *editMenu;
    QMenu *editModeMenu;
    QMenu *editSelectMenu;
    QMenu *editInsertMenu;
    QMenu *editRemoveMenu;
    QMenu *transportMenu;
    QMenu *helpMenu;
    QStatusBar *statusBar;
    QToolBar *fileToolbar;
    QToolBar *editToolbar;
    QToolBar *viewToolbar;
    QToolBar *transportToolbar;
    QToolBar *timeToolbar;
    QToolBar *editViewToolbar;
    QToolBar *editEventToolbar;
    QToolBar *snapToScaleToolbar;
    QToolBar *thumbViewToolbar;

    void setupUi(QMainWindow *qtractorMidiEditorForm)
    {
        if (qtractorMidiEditorForm->objectName().isEmpty())
            qtractorMidiEditorForm->setObjectName(QString::fromUtf8("qtractorMidiEditorForm"));
        qtractorMidiEditorForm->resize(900, 600);
        const QIcon icon = QIcon(QString::fromUtf8(":/images/qtractor.svg"));
        qtractorMidiEditorForm->setWindowIcon(icon);
        fileSaveAction = new QAction(qtractorMidiEditorForm);
        fileSaveAction->setObjectName(QString::fromUtf8("fileSaveAction"));
        const QIcon icon1 = QIcon(QString::fromUtf8(":/images/fileSave.png"));
        fileSaveAction->setIcon(icon1);
        fileSaveAsAction = new QAction(qtractorMidiEditorForm);
        fileSaveAsAction->setObjectName(QString::fromUtf8("fileSaveAsAction"));
        fileUnlinkAction = new QAction(qtractorMidiEditorForm);
        fileUnlinkAction->setObjectName(QString::fromUtf8("fileUnlinkAction"));
        fileRecordExAction = new QAction(qtractorMidiEditorForm);
        fileRecordExAction->setObjectName(QString::fromUtf8("fileRecordExAction"));
        fileRecordExAction->setCheckable(true);
        const QIcon icon2 = QIcon(QString::fromUtf8(":/images/clipRecord.png"));
        fileRecordExAction->setIcon(icon2);
        fileTrackInputsAction = new QAction(qtractorMidiEditorForm);
        fileTrackInputsAction->setObjectName(QString::fromUtf8("fileTrackInputsAction"));
        fileTrackOutputsAction = new QAction(qtractorMidiEditorForm);
        fileTrackOutputsAction->setObjectName(QString::fromUtf8("fileTrackOutputsAction"));
        fileTrackPropertiesAction = new QAction(qtractorMidiEditorForm);
        fileTrackPropertiesAction->setObjectName(QString::fromUtf8("fileTrackPropertiesAction"));
        const QIcon icon3 = QIcon(QString::fromUtf8(":/images/trackProperties.png"));
        fileTrackPropertiesAction->setIcon(icon3);
        filePropertiesAction = new QAction(qtractorMidiEditorForm);
        filePropertiesAction->setObjectName(QString::fromUtf8("filePropertiesAction"));
        const QIcon icon4 = QIcon(QString::fromUtf8(":/images/clipEdit.png"));
        filePropertiesAction->setIcon(icon4);
        fileRangeSetAction = new QAction(qtractorMidiEditorForm);
        fileRangeSetAction->setObjectName(QString::fromUtf8("fileRangeSetAction"));
        fileLoopSetAction = new QAction(qtractorMidiEditorForm);
        fileLoopSetAction->setObjectName(QString::fromUtf8("fileLoopSetAction"));
        fileLoopSetAction->setCheckable(true);
        fileCloseAction = new QAction(qtractorMidiEditorForm);
        fileCloseAction->setObjectName(QString::fromUtf8("fileCloseAction"));
        editUndoAction = new QAction(qtractorMidiEditorForm);
        editUndoAction->setObjectName(QString::fromUtf8("editUndoAction"));
        const QIcon icon5 = QIcon(QString::fromUtf8(":/images/editUndo.png"));
        editUndoAction->setIcon(icon5);
        editRedoAction = new QAction(qtractorMidiEditorForm);
        editRedoAction->setObjectName(QString::fromUtf8("editRedoAction"));
        const QIcon icon6 = QIcon(QString::fromUtf8(":/images/editRedo.png"));
        editRedoAction->setIcon(icon6);
        editCutAction = new QAction(qtractorMidiEditorForm);
        editCutAction->setObjectName(QString::fromUtf8("editCutAction"));
        const QIcon icon7 = QIcon(QString::fromUtf8(":/images/editCut.png"));
        editCutAction->setIcon(icon7);
        editCopyAction = new QAction(qtractorMidiEditorForm);
        editCopyAction->setObjectName(QString::fromUtf8("editCopyAction"));
        const QIcon icon8 = QIcon(QString::fromUtf8(":/images/editCopy.png"));
        editCopyAction->setIcon(icon8);
        editPasteAction = new QAction(qtractorMidiEditorForm);
        editPasteAction->setObjectName(QString::fromUtf8("editPasteAction"));
        const QIcon icon9 = QIcon(QString::fromUtf8(":/images/editPaste.png"));
        editPasteAction->setIcon(icon9);
        editPasteRepeatAction = new QAction(qtractorMidiEditorForm);
        editPasteRepeatAction->setObjectName(QString::fromUtf8("editPasteRepeatAction"));
        editDeleteAction = new QAction(qtractorMidiEditorForm);
        editDeleteAction->setObjectName(QString::fromUtf8("editDeleteAction"));
        const QIcon icon10 = QIcon(QString::fromUtf8(":/images/editDelete.png"));
        editDeleteAction->setIcon(icon10);
        editModeOffAction = new QAction(qtractorMidiEditorForm);
        editModeOffAction->setObjectName(QString::fromUtf8("editModeOffAction"));
        editModeOffAction->setCheckable(true);
        const QIcon icon11 = QIcon(QString::fromUtf8(":/images/editModeOff.png"));
        editModeOffAction->setIcon(icon11);
        editModeOnAction = new QAction(qtractorMidiEditorForm);
        editModeOnAction->setObjectName(QString::fromUtf8("editModeOnAction"));
        editModeOnAction->setCheckable(true);
        const QIcon icon12 = QIcon(QString::fromUtf8(":/images/editModeOn.png"));
        editModeOnAction->setIcon(icon12);
        editModeDrawAction = new QAction(qtractorMidiEditorForm);
        editModeDrawAction->setObjectName(QString::fromUtf8("editModeDrawAction"));
        editModeDrawAction->setCheckable(true);
        const QIcon icon13 = QIcon(QString::fromUtf8(":/images/editModeDraw.png"));
        editModeDrawAction->setIcon(icon13);
        editSelectAllAction = new QAction(qtractorMidiEditorForm);
        editSelectAllAction->setObjectName(QString::fromUtf8("editSelectAllAction"));
        editSelectNoneAction = new QAction(qtractorMidiEditorForm);
        editSelectNoneAction->setObjectName(QString::fromUtf8("editSelectNoneAction"));
        editSelectInvertAction = new QAction(qtractorMidiEditorForm);
        editSelectInvertAction->setObjectName(QString::fromUtf8("editSelectInvertAction"));
        editSelectRangeAction = new QAction(qtractorMidiEditorForm);
        editSelectRangeAction->setObjectName(QString::fromUtf8("editSelectRangeAction"));
        editInsertRangeAction = new QAction(qtractorMidiEditorForm);
        editInsertRangeAction->setObjectName(QString::fromUtf8("editInsertRangeAction"));
        editRemoveRangeAction = new QAction(qtractorMidiEditorForm);
        editRemoveRangeAction->setObjectName(QString::fromUtf8("editRemoveRangeAction"));
        toolsQuantizeAction = new QAction(qtractorMidiEditorForm);
        toolsQuantizeAction->setObjectName(QString::fromUtf8("toolsQuantizeAction"));
        toolsTransposeAction = new QAction(qtractorMidiEditorForm);
        toolsTransposeAction->setObjectName(QString::fromUtf8("toolsTransposeAction"));
        toolsNormalizeAction = new QAction(qtractorMidiEditorForm);
        toolsNormalizeAction->setObjectName(QString::fromUtf8("toolsNormalizeAction"));
        toolsRandomizeAction = new QAction(qtractorMidiEditorForm);
        toolsRandomizeAction->setObjectName(QString::fromUtf8("toolsRandomizeAction"));
        toolsResizeAction = new QAction(qtractorMidiEditorForm);
        toolsResizeAction->setObjectName(QString::fromUtf8("toolsResizeAction"));
        toolsRescaleAction = new QAction(qtractorMidiEditorForm);
        toolsRescaleAction->setObjectName(QString::fromUtf8("toolsRescaleAction"));
        toolsTimeshiftAction = new QAction(qtractorMidiEditorForm);
        toolsTimeshiftAction->setObjectName(QString::fromUtf8("toolsTimeshiftAction"));
        viewMenubarAction = new QAction(qtractorMidiEditorForm);
        viewMenubarAction->setObjectName(QString::fromUtf8("viewMenubarAction"));
        viewMenubarAction->setCheckable(true);
        viewStatusbarAction = new QAction(qtractorMidiEditorForm);
        viewStatusbarAction->setObjectName(QString::fromUtf8("viewStatusbarAction"));
        viewStatusbarAction->setCheckable(true);
        viewToolbarFileAction = new QAction(qtractorMidiEditorForm);
        viewToolbarFileAction->setObjectName(QString::fromUtf8("viewToolbarFileAction"));
        viewToolbarFileAction->setCheckable(true);
        viewToolbarEditAction = new QAction(qtractorMidiEditorForm);
        viewToolbarEditAction->setObjectName(QString::fromUtf8("viewToolbarEditAction"));
        viewToolbarEditAction->setCheckable(true);
        viewToolbarViewAction = new QAction(qtractorMidiEditorForm);
        viewToolbarViewAction->setObjectName(QString::fromUtf8("viewToolbarViewAction"));
        viewToolbarViewAction->setCheckable(true);
        viewToolbarTransportAction = new QAction(qtractorMidiEditorForm);
        viewToolbarTransportAction->setObjectName(QString::fromUtf8("viewToolbarTransportAction"));
        viewToolbarTransportAction->setCheckable(true);
        viewToolbarTimeAction = new QAction(qtractorMidiEditorForm);
        viewToolbarTimeAction->setObjectName(QString::fromUtf8("viewToolbarTimeAction"));
        viewToolbarTimeAction->setCheckable(true);
        viewToolbarScaleAction = new QAction(qtractorMidiEditorForm);
        viewToolbarScaleAction->setObjectName(QString::fromUtf8("viewToolbarScaleAction"));
        viewToolbarScaleAction->setCheckable(true);
        viewToolbarThumbAction = new QAction(qtractorMidiEditorForm);
        viewToolbarThumbAction->setObjectName(QString::fromUtf8("viewToolbarThumbAction"));
        viewToolbarThumbAction->setCheckable(true);
        viewEventsAction = new QAction(qtractorMidiEditorForm);
        viewEventsAction->setObjectName(QString::fromUtf8("viewEventsAction"));
        viewEventsAction->setCheckable(true);
        const QIcon icon14 = QIcon(QString::fromUtf8(":/images/viewEvents.png"));
        viewEventsAction->setIcon(icon14);
        viewNoteNamesAction = new QAction(qtractorMidiEditorForm);
        viewNoteNamesAction->setObjectName(QString::fromUtf8("viewNoteNamesAction"));
        viewNoteNamesAction->setCheckable(true);
        viewNoteDurationAction = new QAction(qtractorMidiEditorForm);
        viewNoteDurationAction->setObjectName(QString::fromUtf8("viewNoteDurationAction"));
        viewNoteDurationAction->setCheckable(true);
        viewNoteColorAction = new QAction(qtractorMidiEditorForm);
        viewNoteColorAction->setObjectName(QString::fromUtf8("viewNoteColorAction"));
        viewNoteColorAction->setCheckable(true);
        viewDrumModeAction = new QAction(qtractorMidiEditorForm);
        viewDrumModeAction->setObjectName(QString::fromUtf8("viewDrumModeAction"));
        viewDrumModeAction->setCheckable(true);
        const QIcon icon15 = QIcon(QString::fromUtf8(":/images/viewDrumMode.png"));
        viewDrumModeAction->setIcon(icon15);
        viewValueColorAction = new QAction(qtractorMidiEditorForm);
        viewValueColorAction->setObjectName(QString::fromUtf8("viewValueColorAction"));
        viewValueColorAction->setCheckable(true);
        viewZoomInAction = new QAction(qtractorMidiEditorForm);
        viewZoomInAction->setObjectName(QString::fromUtf8("viewZoomInAction"));
        const QIcon icon16 = QIcon(QString::fromUtf8(":/images/viewZoomIn.png"));
        viewZoomInAction->setIcon(icon16);
        viewZoomOutAction = new QAction(qtractorMidiEditorForm);
        viewZoomOutAction->setObjectName(QString::fromUtf8("viewZoomOutAction"));
        const QIcon icon17 = QIcon(QString::fromUtf8(":/images/viewZoomOut.png"));
        viewZoomOutAction->setIcon(icon17);
        viewZoomResetAction = new QAction(qtractorMidiEditorForm);
        viewZoomResetAction->setObjectName(QString::fromUtf8("viewZoomResetAction"));
        viewZoomHorizontalAction = new QAction(qtractorMidiEditorForm);
        viewZoomHorizontalAction->setObjectName(QString::fromUtf8("viewZoomHorizontalAction"));
        viewZoomHorizontalAction->setCheckable(true);
        viewZoomVerticalAction = new QAction(qtractorMidiEditorForm);
        viewZoomVerticalAction->setObjectName(QString::fromUtf8("viewZoomVerticalAction"));
        viewZoomVerticalAction->setCheckable(true);
        viewZoomAllAction = new QAction(qtractorMidiEditorForm);
        viewZoomAllAction->setObjectName(QString::fromUtf8("viewZoomAllAction"));
        viewZoomAllAction->setCheckable(true);
        viewSnapZebraAction = new QAction(qtractorMidiEditorForm);
        viewSnapZebraAction->setObjectName(QString::fromUtf8("viewSnapZebraAction"));
        viewSnapZebraAction->setCheckable(true);
        viewSnapGridAction = new QAction(qtractorMidiEditorForm);
        viewSnapGridAction->setObjectName(QString::fromUtf8("viewSnapGridAction"));
        viewSnapGridAction->setCheckable(true);
        viewToolTipsAction = new QAction(qtractorMidiEditorForm);
        viewToolTipsAction->setObjectName(QString::fromUtf8("viewToolTipsAction"));
        viewToolTipsAction->setCheckable(true);
        viewRefreshAction = new QAction(qtractorMidiEditorForm);
        viewRefreshAction->setObjectName(QString::fromUtf8("viewRefreshAction"));
        viewPreviewAction = new QAction(qtractorMidiEditorForm);
        viewPreviewAction->setObjectName(QString::fromUtf8("viewPreviewAction"));
        viewPreviewAction->setCheckable(true);
        const QIcon icon18 = QIcon(QString::fromUtf8(":/images/viewPreview.png"));
        viewPreviewAction->setIcon(icon18);
        viewFollowAction = new QAction(qtractorMidiEditorForm);
        viewFollowAction->setObjectName(QString::fromUtf8("viewFollowAction"));
        viewFollowAction->setCheckable(true);
        const QIcon icon19 = QIcon(QString::fromUtf8(":/images/transportFollow.png"));
        viewFollowAction->setIcon(icon19);
        transportBackwardAction = new QAction(qtractorMidiEditorForm);
        transportBackwardAction->setObjectName(QString::fromUtf8("transportBackwardAction"));
        const QIcon icon20 = QIcon(QString::fromUtf8(":/images/transportBackward.png"));
        transportBackwardAction->setIcon(icon20);
        transportRewindAction = new QAction(qtractorMidiEditorForm);
        transportRewindAction->setObjectName(QString::fromUtf8("transportRewindAction"));
        transportRewindAction->setCheckable(true);
        const QIcon icon21 = QIcon(QString::fromUtf8(":/images/transportRewind.png"));
        transportRewindAction->setIcon(icon21);
        transportFastForwardAction = new QAction(qtractorMidiEditorForm);
        transportFastForwardAction->setObjectName(QString::fromUtf8("transportFastForwardAction"));
        transportFastForwardAction->setCheckable(true);
        const QIcon icon22 = QIcon(QString::fromUtf8(":/images/transportFastForward.png"));
        transportFastForwardAction->setIcon(icon22);
        transportForwardAction = new QAction(qtractorMidiEditorForm);
        transportForwardAction->setObjectName(QString::fromUtf8("transportForwardAction"));
        const QIcon icon23 = QIcon(QString::fromUtf8(":/images/transportForward.png"));
        transportForwardAction->setIcon(icon23);
        transportLoopAction = new QAction(qtractorMidiEditorForm);
        transportLoopAction->setObjectName(QString::fromUtf8("transportLoopAction"));
        transportLoopAction->setCheckable(true);
        const QIcon icon24 = QIcon(QString::fromUtf8(":/images/transportLoop.png"));
        transportLoopAction->setIcon(icon24);
        transportLoopSetAction = new QAction(qtractorMidiEditorForm);
        transportLoopSetAction->setObjectName(QString::fromUtf8("transportLoopSetAction"));
        transportStopAction = new QAction(qtractorMidiEditorForm);
        transportStopAction->setObjectName(QString::fromUtf8("transportStopAction"));
        const QIcon icon25 = QIcon(QString::fromUtf8(":/images/transportStop.png"));
        transportStopAction->setIcon(icon25);
        transportPlayAction = new QAction(qtractorMidiEditorForm);
        transportPlayAction->setObjectName(QString::fromUtf8("transportPlayAction"));
        transportPlayAction->setCheckable(true);
        const QIcon icon26 = QIcon(QString::fromUtf8(":/images/transportPlay.png"));
        transportPlayAction->setIcon(icon26);
        transportRecordAction = new QAction(qtractorMidiEditorForm);
        transportRecordAction->setObjectName(QString::fromUtf8("transportRecordAction"));
        transportRecordAction->setCheckable(true);
        const QIcon icon27 = QIcon(QString::fromUtf8(":/images/transportRecord.png"));
        transportRecordAction->setIcon(icon27);
        transportPunchAction = new QAction(qtractorMidiEditorForm);
        transportPunchAction->setObjectName(QString::fromUtf8("transportPunchAction"));
        transportPunchAction->setCheckable(true);
        const QIcon icon28 = QIcon(QString::fromUtf8(":/images/transportPunch.png"));
        transportPunchAction->setIcon(icon28);
        transportPunchSetAction = new QAction(qtractorMidiEditorForm);
        transportPunchSetAction->setObjectName(QString::fromUtf8("transportPunchSetAction"));
        transportPanicAction = new QAction(qtractorMidiEditorForm);
        transportPanicAction->setObjectName(QString::fromUtf8("transportPanicAction"));
        const QIcon icon29 = QIcon(QString::fromUtf8(":/images/transportPanic.png"));
        transportPanicAction->setIcon(icon29);
        helpShortcutsAction = new QAction(qtractorMidiEditorForm);
        helpShortcutsAction->setObjectName(QString::fromUtf8("helpShortcutsAction"));
        const QIcon icon30 = QIcon(QString::fromUtf8(":/images/helpShortcuts.png"));
        helpShortcutsAction->setIcon(icon30);
        helpAboutAction = new QAction(qtractorMidiEditorForm);
        helpAboutAction->setObjectName(QString::fromUtf8("helpAboutAction"));
        helpAboutQtAction = new QAction(qtractorMidiEditorForm);
        helpAboutQtAction->setObjectName(QString::fromUtf8("helpAboutQtAction"));
        menuBar = new QMenuBar(qtractorMidiEditorForm);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 840, 23));
        fileMenu = new QMenu(menuBar);
        fileMenu->setObjectName(QString::fromUtf8("fileMenu"));
        fileTrackMenu = new QMenu(fileMenu);
        fileTrackMenu->setObjectName(QString::fromUtf8("fileTrackMenu"));
        fileTrackInstrumentMenu = new QMenu(fileTrackMenu);
        fileTrackInstrumentMenu->setObjectName(QString::fromUtf8("fileTrackInstrumentMenu"));
        viewMenu = new QMenu(menuBar);
        viewMenu->setObjectName(QString::fromUtf8("viewMenu"));
        viewToolbarsMenu = new QMenu(viewMenu);
        viewToolbarsMenu->setObjectName(QString::fromUtf8("viewToolbarsMenu"));
        viewWindowsMenu = new QMenu(viewMenu);
        viewWindowsMenu->setObjectName(QString::fromUtf8("viewWindowsMenu"));
        viewNoteTypeMenu = new QMenu(viewMenu);
        viewNoteTypeMenu->setObjectName(QString::fromUtf8("viewNoteTypeMenu"));
        viewValueTypeMenu = new QMenu(viewMenu);
        viewValueTypeMenu->setObjectName(QString::fromUtf8("viewValueTypeMenu"));
        viewGhostTrackMenu = new QMenu(viewMenu);
        viewGhostTrackMenu->setObjectName(QString::fromUtf8("viewGhostTrackMenu"));
        viewZoomMenu = new QMenu(viewMenu);
        viewZoomMenu->setObjectName(QString::fromUtf8("viewZoomMenu"));
        const QIcon icon31 = QIcon(QString::fromUtf8(":/images/viewZoomTool.png"));
        viewZoomMenu->setIcon(icon31);
        viewSnapMenu = new QMenu(viewMenu);
        viewSnapMenu->setObjectName(QString::fromUtf8("viewSnapMenu"));
        viewScaleMenu = new QMenu(viewMenu);
        viewScaleMenu->setObjectName(QString::fromUtf8("viewScaleMenu"));
        toolsMenu = new QMenu(menuBar);
        toolsMenu->setObjectName(QString::fromUtf8("toolsMenu"));
        editMenu = new QMenu(menuBar);
        editMenu->setObjectName(QString::fromUtf8("editMenu"));
        editModeMenu = new QMenu(editMenu);
        editModeMenu->setObjectName(QString::fromUtf8("editModeMenu"));
        editSelectMenu = new QMenu(editMenu);
        editSelectMenu->setObjectName(QString::fromUtf8("editSelectMenu"));
        editInsertMenu = new QMenu(editMenu);
        editInsertMenu->setObjectName(QString::fromUtf8("editInsertMenu"));
        editRemoveMenu = new QMenu(editMenu);
        editRemoveMenu->setObjectName(QString::fromUtf8("editRemoveMenu"));
        transportMenu = new QMenu(menuBar);
        transportMenu->setObjectName(QString::fromUtf8("transportMenu"));
        helpMenu = new QMenu(menuBar);
        helpMenu->setObjectName(QString::fromUtf8("helpMenu"));
        qtractorMidiEditorForm->setMenuBar(menuBar);
        statusBar = new QStatusBar(qtractorMidiEditorForm);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        qtractorMidiEditorForm->setStatusBar(statusBar);
        fileToolbar = new QToolBar(qtractorMidiEditorForm);
        fileToolbar->setObjectName(QString::fromUtf8("fileToolbar"));
        fileToolbar->setOrientation(Qt::Horizontal);
        qtractorMidiEditorForm->addToolBar(Qt::TopToolBarArea, fileToolbar);
        editToolbar = new QToolBar(qtractorMidiEditorForm);
        editToolbar->setObjectName(QString::fromUtf8("editToolbar"));
        editToolbar->setOrientation(Qt::Horizontal);
        qtractorMidiEditorForm->addToolBar(Qt::TopToolBarArea, editToolbar);
        viewToolbar = new QToolBar(qtractorMidiEditorForm);
        viewToolbar->setObjectName(QString::fromUtf8("viewToolbar"));
        viewToolbar->setOrientation(Qt::Horizontal);
        qtractorMidiEditorForm->addToolBar(Qt::TopToolBarArea, viewToolbar);
        transportToolbar = new QToolBar(qtractorMidiEditorForm);
        transportToolbar->setObjectName(QString::fromUtf8("transportToolbar"));
        transportToolbar->setOrientation(Qt::Horizontal);
        qtractorMidiEditorForm->addToolBar(Qt::TopToolBarArea, transportToolbar);
        timeToolbar = new QToolBar(qtractorMidiEditorForm);
        timeToolbar->setObjectName(QString::fromUtf8("timeToolbar"));
        timeToolbar->setOrientation(Qt::Horizontal);
        qtractorMidiEditorForm->addToolBar(Qt::TopToolBarArea, timeToolbar);
        editViewToolbar = new QToolBar(qtractorMidiEditorForm);
        editViewToolbar->setObjectName(QString::fromUtf8("editViewToolbar"));
        editViewToolbar->setOrientation(Qt::Horizontal);
        qtractorMidiEditorForm->addToolBar(Qt::TopToolBarArea, editViewToolbar);
        editEventToolbar = new QToolBar(qtractorMidiEditorForm);
        editEventToolbar->setObjectName(QString::fromUtf8("editEventToolbar"));
        editEventToolbar->setOrientation(Qt::Horizontal);
        qtractorMidiEditorForm->addToolBar(Qt::TopToolBarArea, editEventToolbar);
        snapToScaleToolbar = new QToolBar(qtractorMidiEditorForm);
        snapToScaleToolbar->setObjectName(QString::fromUtf8("snapToScaleToolbar"));
        snapToScaleToolbar->setOrientation(Qt::Horizontal);
        qtractorMidiEditorForm->addToolBar(Qt::TopToolBarArea, snapToScaleToolbar);
        thumbViewToolbar = new QToolBar(qtractorMidiEditorForm);
        thumbViewToolbar->setObjectName(QString::fromUtf8("thumbViewToolbar"));
        thumbViewToolbar->setOrientation(Qt::Horizontal);
        qtractorMidiEditorForm->addToolBar(Qt::BottomToolBarArea, thumbViewToolbar);

        menuBar->addAction(fileMenu->menuAction());
        menuBar->addAction(editMenu->menuAction());
        menuBar->addAction(viewMenu->menuAction());
        menuBar->addAction(toolsMenu->menuAction());
        menuBar->addAction(transportMenu->menuAction());
        menuBar->addAction(helpMenu->menuAction());
        fileMenu->addAction(fileSaveAction);
        fileMenu->addAction(fileSaveAsAction);
        fileMenu->addAction(fileUnlinkAction);
        fileMenu->addAction(fileRecordExAction);
        fileMenu->addSeparator();
        fileMenu->addAction(filePropertiesAction);
        fileMenu->addSeparator();
        fileMenu->addAction(fileRangeSetAction);
        fileMenu->addAction(fileLoopSetAction);
        fileMenu->addSeparator();
        fileMenu->addAction(fileTrackMenu->menuAction());
        fileMenu->addSeparator();
        fileMenu->addAction(fileCloseAction);
        fileTrackMenu->addAction(fileTrackInputsAction);
        fileTrackMenu->addAction(fileTrackOutputsAction);
        fileTrackMenu->addSeparator();
        fileTrackMenu->addAction(fileTrackInstrumentMenu->menuAction());
        fileTrackMenu->addSeparator();
        fileTrackMenu->addAction(fileTrackPropertiesAction);
        viewMenu->addAction(viewMenubarAction);
        viewMenu->addAction(viewStatusbarAction);
        viewMenu->addAction(viewToolbarsMenu->menuAction());
        viewMenu->addAction(viewWindowsMenu->menuAction());
        viewMenu->addSeparator();
        viewMenu->addAction(viewToolTipsAction);
        viewMenu->addSeparator();
        viewMenu->addAction(viewNoteNamesAction);
        viewMenu->addAction(viewNoteDurationAction);
        viewMenu->addAction(viewNoteColorAction);
        viewMenu->addAction(viewNoteTypeMenu->menuAction());
        viewMenu->addAction(viewDrumModeAction);
        viewMenu->addSeparator();
        viewMenu->addAction(viewValueColorAction);
        viewMenu->addAction(viewValueTypeMenu->menuAction());
        viewMenu->addSeparator();
        viewMenu->addAction(viewGhostTrackMenu->menuAction());
        viewMenu->addSeparator();
        viewMenu->addAction(viewZoomMenu->menuAction());
        viewMenu->addAction(viewSnapMenu->menuAction());
        viewMenu->addAction(viewScaleMenu->menuAction());
        viewMenu->addSeparator();
        viewMenu->addAction(viewRefreshAction);
        viewMenu->addSeparator();
        viewMenu->addAction(viewPreviewAction);
        viewMenu->addAction(viewFollowAction);
        viewToolbarsMenu->addAction(viewToolbarFileAction);
        viewToolbarsMenu->addAction(viewToolbarEditAction);
        viewToolbarsMenu->addAction(viewToolbarViewAction);
        viewToolbarsMenu->addAction(viewToolbarTransportAction);
        viewToolbarsMenu->addAction(viewToolbarTimeAction);
        viewToolbarsMenu->addAction(viewToolbarScaleAction);
        viewToolbarsMenu->addAction(viewToolbarThumbAction);
        viewWindowsMenu->addAction(viewEventsAction);
        viewZoomMenu->addAction(viewZoomInAction);
        viewZoomMenu->addAction(viewZoomOutAction);
        viewZoomMenu->addSeparator();
        viewZoomMenu->addAction(viewZoomResetAction);
        viewZoomMenu->addSeparator();
        viewZoomMenu->addAction(viewZoomHorizontalAction);
        viewZoomMenu->addAction(viewZoomVerticalAction);
        viewZoomMenu->addAction(viewZoomAllAction);
        toolsMenu->addAction(toolsQuantizeAction);
        toolsMenu->addAction(toolsTransposeAction);
        toolsMenu->addAction(toolsNormalizeAction);
        toolsMenu->addAction(toolsRandomizeAction);
        toolsMenu->addAction(toolsResizeAction);
        toolsMenu->addAction(toolsRescaleAction);
        toolsMenu->addAction(toolsTimeshiftAction);
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
        editMenu->addAction(editModeMenu->menuAction());
        editMenu->addAction(editSelectMenu->menuAction());
        editMenu->addSeparator();
        editMenu->addAction(editInsertMenu->menuAction());
        editMenu->addAction(editRemoveMenu->menuAction());
        editMenu->addSeparator();
        editMenu->addAction(toolsMenu->menuAction());
        editModeMenu->addAction(editModeOffAction);
        editModeMenu->addAction(editModeOnAction);
        editModeMenu->addSeparator();
        editModeMenu->addAction(editModeDrawAction);
        editSelectMenu->addAction(editSelectAllAction);
        editSelectMenu->addAction(editSelectNoneAction);
        editSelectMenu->addAction(editSelectInvertAction);
        editSelectMenu->addSeparator();
        editSelectMenu->addAction(editSelectRangeAction);
        editInsertMenu->addAction(editInsertRangeAction);
        editRemoveMenu->addAction(editRemoveRangeAction);
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
        transportMenu->addAction(transportPanicAction);
        helpMenu->addAction(helpShortcutsAction);
        helpMenu->addSeparator();
        helpMenu->addAction(helpAboutAction);
        helpMenu->addAction(helpAboutQtAction);
        fileToolbar->addAction(filePropertiesAction);
        fileToolbar->addAction(fileSaveAction);
        fileToolbar->addSeparator();
        fileToolbar->addAction(fileTrackPropertiesAction);
        fileToolbar->addSeparator();
        fileToolbar->addAction(fileRecordExAction);
        editToolbar->addAction(editUndoAction);
        editToolbar->addAction(editRedoAction);
        editToolbar->addSeparator();
        editToolbar->addAction(editCutAction);
        editToolbar->addAction(editCopyAction);
        editToolbar->addAction(editPasteAction);
        editToolbar->addSeparator();
        editToolbar->addAction(editDeleteAction);
        viewToolbar->addAction(viewEventsAction);
        viewToolbar->addSeparator();
        viewToolbar->addAction(viewPreviewAction);
        viewToolbar->addAction(viewFollowAction);
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
        transportToolbar->addSeparator();
        transportToolbar->addAction(transportPanicAction);

        retranslateUi(qtractorMidiEditorForm);

        QMetaObject::connectSlotsByName(qtractorMidiEditorForm);
    } // setupUi

    void retranslateUi(QMainWindow *qtractorMidiEditorForm)
    {
        qtractorMidiEditorForm->setWindowTitle(QCoreApplication::translate("qtractorMidiEditorForm", "MIDI Editor", nullptr));
        fileSaveAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Save", nullptr));
        fileSaveAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Save", nullptr));
#if QT_CONFIG(tooltip)
        fileSaveAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Save", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        fileSaveAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Save current MIDI clip to existing file name", nullptr));
#endif // QT_CONFIG(statustip)
        fileSaveAsAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "Save &As...", nullptr));
        fileSaveAsAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Save As", nullptr));
#if QT_CONFIG(tooltip)
        fileSaveAsAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Save as", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        fileSaveAsAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Save current MIDI clip with another file name", nullptr));
#endif // QT_CONFIG(statustip)
        fileUnlinkAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Unlink", nullptr));
        fileUnlinkAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Unlink", nullptr));
#if QT_CONFIG(tooltip)
        fileUnlinkAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Unlink", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        fileUnlinkAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Unlink current MIDI clip", nullptr));
#endif // QT_CONFIG(statustip)
        fileRecordExAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "Recor&d", nullptr));
        fileRecordExAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Record", nullptr));
#if QT_CONFIG(tooltip)
        fileRecordExAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Record", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        fileRecordExAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Record current MIDI clip (overdub)", nullptr));
#endif // QT_CONFIG(statustip)
        fileTrackInputsAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Inputs", nullptr));
        fileTrackInputsAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Track Inputs", nullptr));
#if QT_CONFIG(tooltip)
        fileTrackInputsAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Track inputs", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        fileTrackInputsAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Show current MIDI clip/track input bus connections", nullptr));
#endif // QT_CONFIG(statustip)
        fileTrackOutputsAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Outputs", nullptr));
        fileTrackOutputsAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Track Outputs", nullptr));
#if QT_CONFIG(tooltip)
        fileTrackOutputsAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Track outputs", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        fileTrackOutputsAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Show current MIDI clip/track output bus connections", nullptr));
#endif // QT_CONFIG(statustip)
        fileTrackPropertiesAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Properties...", nullptr));
        fileTrackPropertiesAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Track Properties", nullptr));
#if QT_CONFIG(tooltip)
        fileTrackPropertiesAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Track properties", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        fileTrackPropertiesAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Edit current MIDI clip/track properties", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        fileTrackPropertiesAction->setShortcut(QCoreApplication::translate("qtractorMidiEditorForm", "Shift+F2", nullptr));
#endif // QT_CONFIG(shortcut)
        filePropertiesAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Properties...", nullptr));
        filePropertiesAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Properties", nullptr));
#if QT_CONFIG(tooltip)
        filePropertiesAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Properties", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        filePropertiesAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Edit current MIDI clip properties", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        filePropertiesAction->setShortcut(QCoreApplication::translate("qtractorMidiEditorForm", "F4", nullptr));
#endif // QT_CONFIG(shortcut)
        fileRangeSetAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Range Set", nullptr));
        fileRangeSetAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Clip Range", nullptr));
#if QT_CONFIG(tooltip)
        fileRangeSetAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Clip range", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        fileRangeSetAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Set edit-range from clip extents", nullptr));
#endif // QT_CONFIG(statustip)
        fileLoopSetAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Loop Set", nullptr));
        fileLoopSetAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Clip Loop", nullptr));
#if QT_CONFIG(tooltip)
        fileLoopSetAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Clip loop", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        fileLoopSetAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Set loop-range from clip extents", nullptr));
#endif // QT_CONFIG(statustip)
        fileCloseAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Close", nullptr));
        fileCloseAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Close", nullptr));
#if QT_CONFIG(tooltip)
        fileCloseAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Close", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        fileCloseAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Close this MIDI clip editor", nullptr));
#endif // QT_CONFIG(statustip)
        editUndoAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Undo", nullptr));
        editUndoAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Undo", nullptr));
#if QT_CONFIG(tooltip)
        editUndoAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Undo", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        editUndoAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Undo last edit operation", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        editUndoAction->setShortcut(QCoreApplication::translate("qtractorMidiEditorForm", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        editRedoAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Redo", nullptr));
        editRedoAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Redo", nullptr));
#if QT_CONFIG(tooltip)
        editRedoAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Redo", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        editRedoAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Redo last edit operation", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        editRedoAction->setShortcut(QCoreApplication::translate("qtractorMidiEditorForm", "Ctrl+Shift+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        editCutAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "Cu&t", nullptr));
        editCutAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Cut", nullptr));
#if QT_CONFIG(tooltip)
        editCutAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Cut", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        editCutAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Cut current selection into the local clipboard", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        editCutAction->setShortcut(QCoreApplication::translate("qtractorMidiEditorForm", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        editCopyAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Copy", nullptr));
        editCopyAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Copy", nullptr));
#if QT_CONFIG(tooltip)
        editCopyAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Copy", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        editCopyAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Copy current selection to the local clipboard", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        editCopyAction->setShortcut(QCoreApplication::translate("qtractorMidiEditorForm", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        editPasteAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Paste", nullptr));
        editPasteAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Paste", nullptr));
#if QT_CONFIG(tooltip)
        editPasteAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Paste", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        editPasteAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Paste local clipboard contents into the current MIDI clip", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        editPasteAction->setShortcut(QCoreApplication::translate("qtractorMidiEditorForm", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        editPasteRepeatAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "Past&e Repeat...", nullptr));
        editPasteRepeatAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Paste Repeat", nullptr));
#if QT_CONFIG(tooltip)
        editPasteRepeatAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Paste repeat", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        editPasteRepeatAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Paste/repeat local clipboard contents into the current MIDI clip", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        editPasteRepeatAction->setShortcut(QCoreApplication::translate("qtractorMidiEditorForm", "Ctrl+Shift+V", nullptr));
#endif // QT_CONFIG(shortcut)
        editDeleteAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Delete", nullptr));
        editDeleteAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Delete", nullptr));
#if QT_CONFIG(tooltip)
        editDeleteAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Delete", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        editDeleteAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Delete current selection", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        editDeleteAction->setShortcut(QCoreApplication::translate("qtractorMidiEditorForm", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        editModeOffAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "Edit Of&f", nullptr));
        editModeOffAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Edit Off", nullptr));
#if QT_CONFIG(tooltip)
        editModeOffAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Edit off", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        editModeOffAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Set edit mode off", nullptr));
#endif // QT_CONFIG(statustip)
        editModeOnAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "Edit &On", nullptr));
        editModeOnAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Edit On", nullptr));
#if QT_CONFIG(tooltip)
        editModeOnAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Edit on", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        editModeOnAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Set edit mode on", nullptr));
#endif // QT_CONFIG(statustip)
        editModeDrawAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "Edit &Draw", nullptr));
        editModeDrawAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Edit draw mode", nullptr));
#if QT_CONFIG(statustip)
        editModeDrawAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Edit draw mode (notes)", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        editModeDrawAction->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        editSelectAllAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&All", nullptr));
        editSelectAllAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Select All", nullptr));
#if QT_CONFIG(tooltip)
        editSelectAllAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Select all", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        editSelectAllAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Select all", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        editSelectAllAction->setShortcut(QCoreApplication::translate("qtractorMidiEditorForm", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        editSelectNoneAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&None", nullptr));
        editSelectNoneAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Select None", nullptr));
#if QT_CONFIG(tooltip)
        editSelectNoneAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Select none", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        editSelectNoneAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Select none", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        editSelectNoneAction->setShortcut(QCoreApplication::translate("qtractorMidiEditorForm", "Ctrl+Shift+A", nullptr));
#endif // QT_CONFIG(shortcut)
        editSelectInvertAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Invert", nullptr));
        editSelectInvertAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Select Invert", nullptr));
#if QT_CONFIG(tooltip)
        editSelectInvertAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Select invert", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        editSelectInvertAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Select invert", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        editSelectInvertAction->setShortcut(QCoreApplication::translate("qtractorMidiEditorForm", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        editSelectRangeAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Range", nullptr));
        editSelectRangeAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Select Range", nullptr));
#if QT_CONFIG(tooltip)
        editSelectRangeAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Select range", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        editSelectRangeAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Mark range as selected", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        editSelectRangeAction->setShortcut(QCoreApplication::translate("qtractorMidiEditorForm", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        editInsertRangeAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Range", nullptr));
        editInsertRangeAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Insert Range", nullptr));
#if QT_CONFIG(tooltip)
        editInsertRangeAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Insert range", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        editInsertRangeAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Insert range as selected", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        editInsertRangeAction->setShortcut(QCoreApplication::translate("qtractorMidiEditorForm", "Ctrl+Ins", nullptr));
#endif // QT_CONFIG(shortcut)
        editRemoveRangeAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Range", nullptr));
        editRemoveRangeAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Remove Range", nullptr));
#if QT_CONFIG(tooltip)
        editRemoveRangeAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Remove range", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        editRemoveRangeAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Remove range as selected", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        editRemoveRangeAction->setShortcut(QCoreApplication::translate("qtractorMidiEditorForm", "Ctrl+Del", nullptr));
#endif // QT_CONFIG(shortcut)
        toolsQuantizeAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Quantize...", nullptr));
        toolsQuantizeAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Quantize", nullptr));
#if QT_CONFIG(tooltip)
        toolsQuantizeAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Quantize", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        toolsQuantizeAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Quantize selection", nullptr));
#endif // QT_CONFIG(statustip)
        toolsTransposeAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Transpose...", nullptr));
        toolsTransposeAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Transpose", nullptr));
#if QT_CONFIG(tooltip)
        toolsTransposeAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Transpose", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        toolsTransposeAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Transpose selection", nullptr));
#endif // QT_CONFIG(statustip)
        toolsNormalizeAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Normalize...", nullptr));
        toolsNormalizeAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Normalize", nullptr));
#if QT_CONFIG(tooltip)
        toolsNormalizeAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Normalize", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        toolsNormalizeAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Normalize selection", nullptr));
#endif // QT_CONFIG(statustip)
        toolsRandomizeAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Randomize...", nullptr));
        toolsRandomizeAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Randomize", nullptr));
#if QT_CONFIG(tooltip)
        toolsRandomizeAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Randomize", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        toolsRandomizeAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Randomize selection", nullptr));
#endif // QT_CONFIG(statustip)
        toolsResizeAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "Resi&ze...", nullptr));
        toolsResizeAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Resize", nullptr));
#if QT_CONFIG(tooltip)
        toolsResizeAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Resize", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        toolsResizeAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Resize selection", nullptr));
#endif // QT_CONFIG(statustip)
        toolsRescaleAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "Re&scale...", nullptr));
        toolsRescaleAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Rescale", nullptr));
#if QT_CONFIG(tooltip)
        toolsRescaleAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Rescale", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        toolsRescaleAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Rescale selection", nullptr));
#endif // QT_CONFIG(statustip)
        toolsTimeshiftAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "T&imeshift...", nullptr));
        toolsTimeshiftAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Timeshift", nullptr));
#if QT_CONFIG(tooltip)
        toolsTimeshiftAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Timeshift", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        toolsTimeshiftAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Timeshift selection", nullptr));
#endif // QT_CONFIG(statustip)
        viewMenubarAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Menubar", nullptr));
        viewMenubarAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Menubar", nullptr));
#if QT_CONFIG(tooltip)
        viewMenubarAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Menubar", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewMenubarAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Show/hide the menubar", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        viewMenubarAction->setShortcut(QCoreApplication::translate("qtractorMidiEditorForm", "Ctrl+M", nullptr));
#endif // QT_CONFIG(shortcut)
        viewStatusbarAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Statusbar", nullptr));
        viewStatusbarAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Statusbar", nullptr));
#if QT_CONFIG(tooltip)
        viewStatusbarAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Statusbar", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewStatusbarAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Show/hide the statusbar", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        viewStatusbarAction->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        viewToolbarFileAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&File", nullptr));
        viewToolbarFileAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "File Toolbar", nullptr));
#if QT_CONFIG(tooltip)
        viewToolbarFileAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "File toolbar", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewToolbarFileAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Show/hide the file toolbar", nullptr));
#endif // QT_CONFIG(statustip)
        viewToolbarEditAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Edit", nullptr));
        viewToolbarEditAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Edit Toolbar", nullptr));
#if QT_CONFIG(tooltip)
        viewToolbarEditAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Edit toolbar", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewToolbarEditAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Show/hide the edit toolbar", nullptr));
#endif // QT_CONFIG(statustip)
        viewToolbarViewAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&View", nullptr));
        viewToolbarViewAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "View Toolbar", nullptr));
#if QT_CONFIG(tooltip)
        viewToolbarViewAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "View toolbar", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewToolbarViewAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Show/hide the view toolbar", nullptr));
#endif // QT_CONFIG(statustip)
        viewToolbarTransportAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Transport", nullptr));
        viewToolbarTransportAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Transport Toolbar", nullptr));
#if QT_CONFIG(tooltip)
        viewToolbarTransportAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Transport toolbar", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewToolbarTransportAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Show/hide the transport toolbar", nullptr));
#endif // QT_CONFIG(statustip)
        viewToolbarTimeAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "T&ime", nullptr));
        viewToolbarTimeAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Time Toolbar", nullptr));
#if QT_CONFIG(tooltip)
        viewToolbarTimeAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Time toolbar", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewToolbarTimeAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Show/hide the time toolbar", nullptr));
#endif // QT_CONFIG(statustip)
        viewToolbarScaleAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Scale", nullptr));
        viewToolbarScaleAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Scale Toolbar", nullptr));
#if QT_CONFIG(tooltip)
        viewToolbarScaleAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Scale toolbar", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewToolbarScaleAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Show/hide the scale toolbar", nullptr));
#endif // QT_CONFIG(statustip)
        viewToolbarThumbAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "Thum&b", nullptr));
        viewToolbarThumbAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Thumb Toolbar", nullptr));
#if QT_CONFIG(tooltip)
        viewToolbarThumbAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Thumb toolbar", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewToolbarThumbAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Show/hide the thumb view toolbar", nullptr));
#endif // QT_CONFIG(statustip)
        viewEventsAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Events", nullptr));
        viewEventsAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "View events", nullptr));
#if QT_CONFIG(tooltip)
        viewEventsAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "View events", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewEventsAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Show/hide the events list", nullptr));
#endif // QT_CONFIG(statustip)
        viewNoteNamesAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "Note &Names", nullptr));
        viewNoteNamesAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Note Names", nullptr));
#if QT_CONFIG(tooltip)
        viewNoteNamesAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Note names", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewNoteNamesAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Whether to show note names", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        viewNoteNamesAction->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        viewNoteDurationAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "Note &Duration", nullptr));
        viewNoteDurationAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Note Duration", nullptr));
#if QT_CONFIG(tooltip)
        viewNoteDurationAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Note duration", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewNoteDurationAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Whether note events are shown proportional to duration", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        viewNoteDurationAction->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        viewNoteColorAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "Note &Color", nullptr));
        viewNoteColorAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Note Color", nullptr));
#if QT_CONFIG(tooltip)
        viewNoteColorAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Note color", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewNoteColorAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Whether note events are colored according to pitch", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        viewNoteColorAction->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        viewDrumModeAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Drum Mode", nullptr));
        viewDrumModeAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Drum Mode", nullptr));
#if QT_CONFIG(tooltip)
        viewDrumModeAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Drum mode", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewDrumModeAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Whether note onset events are displayed as diamonds", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        viewDrumModeAction->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        viewValueColorAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Value Color", nullptr));
        viewValueColorAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Value Color", nullptr));
#if QT_CONFIG(tooltip)
        viewValueColorAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Value color", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewValueColorAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Whether note events are colored according to value (velocity)", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        viewValueColorAction->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        viewZoomInAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&In", nullptr));
        viewZoomInAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Zoom In", nullptr));
#if QT_CONFIG(tooltip)
        viewZoomInAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Zoom in", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewZoomInAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Zoom in", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        viewZoomInAction->setShortcut(QCoreApplication::translate("qtractorMidiEditorForm", "Ctrl++", nullptr));
#endif // QT_CONFIG(shortcut)
        viewZoomOutAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Out", nullptr));
        viewZoomOutAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Zoom Out", nullptr));
#if QT_CONFIG(tooltip)
        viewZoomOutAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Zoom out", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewZoomOutAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Zoom out", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        viewZoomOutAction->setShortcut(QCoreApplication::translate("qtractorMidiEditorForm", "Ctrl+-", nullptr));
#endif // QT_CONFIG(shortcut)
        viewZoomResetAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Reset", nullptr));
        viewZoomResetAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Zoom Reset", nullptr));
#if QT_CONFIG(tooltip)
        viewZoomResetAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Zoom reset", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewZoomResetAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Zoom reset", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        viewZoomResetAction->setShortcut(QCoreApplication::translate("qtractorMidiEditorForm", "Ctrl+1", nullptr));
#endif // QT_CONFIG(shortcut)
        viewZoomHorizontalAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Horizontal", nullptr));
        viewZoomHorizontalAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Horizontal Zoom", nullptr));
#if QT_CONFIG(tooltip)
        viewZoomHorizontalAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Horizontal zoom", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewZoomHorizontalAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Horizontal zoom mode", nullptr));
#endif // QT_CONFIG(statustip)
        viewZoomVerticalAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Vertical", nullptr));
        viewZoomVerticalAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Vertical Zoom", nullptr));
#if QT_CONFIG(tooltip)
        viewZoomVerticalAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Vertical zoom", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewZoomVerticalAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Vertical zoom mode", nullptr));
#endif // QT_CONFIG(statustip)
        viewZoomAllAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&All", nullptr));
        viewZoomAllAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "All Zoom", nullptr));
#if QT_CONFIG(tooltip)
        viewZoomAllAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "All zoom", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewZoomAllAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "All zoom mode", nullptr));
#endif // QT_CONFIG(statustip)
        viewSnapZebraAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Zebra", nullptr));
        viewSnapZebraAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Zebra", nullptr));
#if QT_CONFIG(tooltip)
        viewSnapZebraAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Zebra", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewSnapZebraAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Bar zebra view mode", nullptr));
#endif // QT_CONFIG(statustip)
        viewSnapGridAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Grid", nullptr));
        viewSnapGridAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Grid", nullptr));
#if QT_CONFIG(tooltip)
        viewSnapGridAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Grid", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewSnapGridAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Snap grid view mode", nullptr));
#endif // QT_CONFIG(statustip)
        viewToolTipsAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "Too&l Tips", nullptr));
        viewToolTipsAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Tool tips", nullptr));
#if QT_CONFIG(tooltip)
        viewToolTipsAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Tool tips", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewToolTipsAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Floating tool tips view mode", nullptr));
#endif // QT_CONFIG(statustip)
        viewRefreshAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Refresh", nullptr));
        viewRefreshAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Refresh", nullptr));
#if QT_CONFIG(tooltip)
        viewRefreshAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Refresh", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewRefreshAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Refresh views", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        viewRefreshAction->setShortcut(QCoreApplication::translate("qtractorMidiEditorForm", "F5", nullptr));
#endif // QT_CONFIG(shortcut)
        viewPreviewAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Preview Notes", nullptr));
        viewPreviewAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Preview Notes", nullptr));
#if QT_CONFIG(tooltip)
        viewPreviewAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Preview notes", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewPreviewAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Preview notes while editing (scrub)", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        viewPreviewAction->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        viewFollowAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "F&ollow Playhead", nullptr));
        viewFollowAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Follow Playhead", nullptr));
#if QT_CONFIG(tooltip)
        viewFollowAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Follow playhead", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        viewFollowAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Follow playhead", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        viewFollowAction->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        transportBackwardAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Backward", nullptr));
        transportBackwardAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Backward", nullptr));
#if QT_CONFIG(tooltip)
        transportBackwardAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Backward", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        transportBackwardAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Transport backward", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        transportBackwardAction->setShortcut(QCoreApplication::translate("qtractorMidiEditorForm", "Backspace", nullptr));
#endif // QT_CONFIG(shortcut)
        transportRewindAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "Re&wind", nullptr));
        transportRewindAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Rewind", nullptr));
#if QT_CONFIG(tooltip)
        transportRewindAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Rewind", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        transportRewindAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Transport rewind", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        transportRewindAction->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        transportFastForwardAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "F&ast Forward", nullptr));
        transportFastForwardAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Fast Forward", nullptr));
#if QT_CONFIG(tooltip)
        transportFastForwardAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Fast forward", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        transportFastForwardAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Transport fast forward", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        transportFastForwardAction->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        transportForwardAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Forward", nullptr));
        transportForwardAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Forward", nullptr));
#if QT_CONFIG(tooltip)
        transportForwardAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Forward", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        transportForwardAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Transport forward", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        transportForwardAction->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        transportLoopAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Loop", nullptr));
        transportLoopAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Loop", nullptr));
#if QT_CONFIG(tooltip)
        transportLoopAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Loop", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        transportLoopAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Transport loop", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        transportLoopAction->setShortcut(QCoreApplication::translate("qtractorMidiEditorForm", "Ctrl+Shift+L", nullptr));
#endif // QT_CONFIG(shortcut)
        transportLoopSetAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "Loop &Set", nullptr));
        transportLoopSetAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Loop Set", nullptr));
#if QT_CONFIG(tooltip)
        transportLoopSetAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Loop set", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        transportLoopSetAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Transport loop set", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        transportLoopSetAction->setShortcut(QCoreApplication::translate("qtractorMidiEditorForm", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        transportStopAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Stop", nullptr));
        transportStopAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Stop", nullptr));
#if QT_CONFIG(tooltip)
        transportStopAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Stop", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        transportStopAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Transport stop", nullptr));
#endif // QT_CONFIG(statustip)
        transportPlayAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Play", nullptr));
        transportPlayAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Play", nullptr));
#if QT_CONFIG(tooltip)
        transportPlayAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Play", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        transportPlayAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Transport play/pause", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        transportPlayAction->setShortcut(QCoreApplication::translate("qtractorMidiEditorForm", "Space", nullptr));
#endif // QT_CONFIG(shortcut)
        transportRecordAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Record", nullptr));
        transportRecordAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Record", nullptr));
#if QT_CONFIG(tooltip)
        transportRecordAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Record", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        transportRecordAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Transport record", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        transportRecordAction->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        transportPunchAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Punch", nullptr));
        transportPunchAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Punch", nullptr));
#if QT_CONFIG(tooltip)
        transportPunchAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Punch in/out", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        transportPunchAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Transport punch in/out", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        transportPunchAction->setShortcut(QCoreApplication::translate("qtractorMidiEditorForm", "Ctrl+Shift+P", nullptr));
#endif // QT_CONFIG(shortcut)
        transportPunchSetAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "Punch Se&t", nullptr));
        transportPunchSetAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Punch Set", nullptr));
#if QT_CONFIG(tooltip)
        transportPunchSetAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Punch in/out set", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        transportPunchSetAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Transport punch in/out set", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        transportPunchSetAction->setShortcut(QCoreApplication::translate("qtractorMidiEditorForm", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        transportPanicAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "Pa&nic", nullptr));
        transportPanicAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Panic", nullptr));
#if QT_CONFIG(tooltip)
        transportPanicAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Panic", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        transportPanicAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "All MIDI tracks shut off (panic)", nullptr));
#endif // QT_CONFIG(statustip)
        helpShortcutsAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&Shortcuts...", nullptr));
        helpShortcutsAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "Shortcuts", nullptr));
#if QT_CONFIG(tooltip)
        helpShortcutsAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "Shortcuts", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        helpShortcutsAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Keyboard shortcuts", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        helpShortcutsAction->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        helpAboutAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "&About...", nullptr));
        helpAboutAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "About", nullptr));
#if QT_CONFIG(tooltip)
        helpAboutAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "About", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        helpAboutAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Show information about this application program", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        helpAboutAction->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        helpAboutQtAction->setText(QCoreApplication::translate("qtractorMidiEditorForm", "About &Qt...", nullptr));
        helpAboutQtAction->setIconText(QCoreApplication::translate("qtractorMidiEditorForm", "About Qt", nullptr));
#if QT_CONFIG(tooltip)
        helpAboutQtAction->setToolTip(QCoreApplication::translate("qtractorMidiEditorForm", "About Qt", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        helpAboutQtAction->setStatusTip(QCoreApplication::translate("qtractorMidiEditorForm", "Show information about the Qt toolkit", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        helpAboutQtAction->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        fileMenu->setTitle(QCoreApplication::translate("qtractorMidiEditorForm", "&File", nullptr));
        fileTrackMenu->setTitle(QCoreApplication::translate("qtractorMidiEditorForm", "&Track", nullptr));
        fileTrackInstrumentMenu->setTitle(QCoreApplication::translate("qtractorMidiEditorForm", "Instrum&ent", nullptr));
        viewMenu->setTitle(QCoreApplication::translate("qtractorMidiEditorForm", "&View", nullptr));
        viewToolbarsMenu->setTitle(QCoreApplication::translate("qtractorMidiEditorForm", "&Toolbars", nullptr));
        viewWindowsMenu->setTitle(QCoreApplication::translate("qtractorMidiEditorForm", "&Windows", nullptr));
        viewNoteTypeMenu->setTitle(QCoreApplication::translate("qtractorMidiEditorForm", "Not&e Type", nullptr));
        viewValueTypeMenu->setTitle(QCoreApplication::translate("qtractorMidiEditorForm", "Val&ue Type", nullptr));
        viewGhostTrackMenu->setTitle(QCoreApplication::translate("qtractorMidiEditorForm", "&Ghost Track", nullptr));
        viewZoomMenu->setTitle(QCoreApplication::translate("qtractorMidiEditorForm", "&Zoom", nullptr));
        viewSnapMenu->setTitle(QCoreApplication::translate("qtractorMidiEditorForm", "S&nap", nullptr));
        viewScaleMenu->setTitle(QCoreApplication::translate("qtractorMidiEditorForm", "Sc&ale", nullptr));
        toolsMenu->setTitle(QCoreApplication::translate("qtractorMidiEditorForm", "&Tools", nullptr));
        editMenu->setTitle(QCoreApplication::translate("qtractorMidiEditorForm", "&Edit", nullptr));
        editModeMenu->setTitle(QCoreApplication::translate("qtractorMidiEditorForm", "Select &Mode", nullptr));
        editSelectMenu->setTitle(QCoreApplication::translate("qtractorMidiEditorForm", "&Select", nullptr));
        editInsertMenu->setTitle(QCoreApplication::translate("qtractorMidiEditorForm", "I&nsert", nullptr));
        editRemoveMenu->setTitle(QCoreApplication::translate("qtractorMidiEditorForm", "Remo&ve", nullptr));
        transportMenu->setTitle(QCoreApplication::translate("qtractorMidiEditorForm", "T&ransport", nullptr));
        helpMenu->setTitle(QCoreApplication::translate("qtractorMidiEditorForm", "&Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qtractorMidiEditorForm: public Ui_qtractorMidiEditorForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTRACTORMIDIEDITORFORM_H
