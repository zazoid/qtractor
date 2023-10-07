/*
qtractor - An Audio/MIDI multi-track sequencer.

   Copyright (C) 2005-2020, rncbc aka Rui Nuno Capela. All rights reserved.

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
** Form generated from reading UI file 'qtractorMidiControlForm.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTRACTORMIDICONTROLFORM_H
#define UI_QTRACTORMIDICONTROLFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_qtractorMidiControlForm
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *FilesListView;
    QPushButton *ImportPushButton;
    QPushButton *RemovePushButton;
    QPushButton *MoveUpPushButton;
    QPushButton *MoveDownPushButton;
    QLabel *ControlTypeTextLabel;
    QLabel *ChannelTextLabel;
    QLabel *ParamTextLabel;
    QLabel *TrackParamTextLabel;
    QLabel *TrackOffsetTextLabel;
    QLabel *TrackLimitTextLabel;
    QLabel *CommandTextLabel;
    QLabel *FlagsTextLabel;
    QSpacerItem *spacerItem;
    QComboBox *ControlTypeComboBox;
    QComboBox *ChannelComboBox;
    QComboBox *ParamComboBox;
    QCheckBox *TrackParamCheckBox;
    QSpinBox *TrackOffsetSpinBox;
    QSpinBox *TrackLimitSpinBox;
    QComboBox *CommandComboBox;
    QCheckBox *DeltaCheckBox;
    QCheckBox *FeedbackCheckBox;
    QPushButton *MapPushButton;
    QTreeWidget *ControlMapListView;
    QPushButton *UnmapPushButton;
    QSpacerItem *spacerItem1;
    QCheckBox *SyncCheckBox;
    QSpacerItem *spacerItem2;
    QPushButton *ReloadPushButton;
    QPushButton *ExportPushButton;
    QPushButton *ClosePushButton;

    void setupUi(QDialog *qtractorMidiControlForm)
    {
        if (qtractorMidiControlForm->objectName().isEmpty())
            qtractorMidiControlForm->setObjectName(QString::fromUtf8("qtractorMidiControlForm"));
        qtractorMidiControlForm->resize(640, 480);
        const QIcon icon = QIcon(QString::fromUtf8(":/images/itemControllers.png"));
        qtractorMidiControlForm->setWindowIcon(icon);
        gridLayout = new QGridLayout(qtractorMidiControlForm);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(8, 8, 8, 8);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        FilesListView = new QTreeWidget(qtractorMidiControlForm);
        FilesListView->setObjectName(QString::fromUtf8("FilesListView"));
        FilesListView->setRootIsDecorated(false);
        FilesListView->setUniformRowHeights(true);
        FilesListView->setItemsExpandable(false);
        FilesListView->setAllColumnsShowFocus(true);

        gridLayout->addWidget(FilesListView, 0, 0, 4, 9);

        ImportPushButton = new QPushButton(qtractorMidiControlForm);
        ImportPushButton->setObjectName(QString::fromUtf8("ImportPushButton"));
        const QIcon icon1 = QIcon(QString::fromUtf8(":/images/formOpen.png"));
        ImportPushButton->setIcon(icon1);

        gridLayout->addWidget(ImportPushButton, 0, 9, 1, 3);

        RemovePushButton = new QPushButton(qtractorMidiControlForm);
        RemovePushButton->setObjectName(QString::fromUtf8("RemovePushButton"));
        const QIcon icon2 = QIcon(QString::fromUtf8(":/images/formRemove.png"));
        RemovePushButton->setIcon(icon2);

        gridLayout->addWidget(RemovePushButton, 1, 9, 1, 3);

        MoveUpPushButton = new QPushButton(qtractorMidiControlForm);
        MoveUpPushButton->setObjectName(QString::fromUtf8("MoveUpPushButton"));
        const QIcon icon3 = QIcon(QString::fromUtf8(":/images/formMoveUp.png"));
        MoveUpPushButton->setIcon(icon3);

        gridLayout->addWidget(MoveUpPushButton, 2, 9, 1, 3);

        MoveDownPushButton = new QPushButton(qtractorMidiControlForm);
        MoveDownPushButton->setObjectName(QString::fromUtf8("MoveDownPushButton"));
        const QIcon icon4 = QIcon(QString::fromUtf8(":/images/formMoveDown.png"));
        MoveDownPushButton->setIcon(icon4);

        gridLayout->addWidget(MoveDownPushButton, 3, 9, 1, 3);

        ControlTypeTextLabel = new QLabel(qtractorMidiControlForm);
        ControlTypeTextLabel->setObjectName(QString::fromUtf8("ControlTypeTextLabel"));
        ControlTypeTextLabel->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout->addWidget(ControlTypeTextLabel, 4, 0, 1, 1);

        ChannelTextLabel = new QLabel(qtractorMidiControlForm);
        ChannelTextLabel->setObjectName(QString::fromUtf8("ChannelTextLabel"));
        ChannelTextLabel->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout->addWidget(ChannelTextLabel, 4, 1, 1, 1);

        ParamTextLabel = new QLabel(qtractorMidiControlForm);
        ParamTextLabel->setObjectName(QString::fromUtf8("ParamTextLabel"));
        ParamTextLabel->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout->addWidget(ParamTextLabel, 4, 2, 1, 1);

        TrackParamTextLabel = new QLabel(qtractorMidiControlForm);
        TrackParamTextLabel->setObjectName(QString::fromUtf8("TrackParamTextLabel"));
        TrackParamTextLabel->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout->addWidget(TrackParamTextLabel, 4, 3, 1, 1);

        TrackOffsetTextLabel = new QLabel(qtractorMidiControlForm);
        TrackOffsetTextLabel->setObjectName(QString::fromUtf8("TrackOffsetTextLabel"));
        TrackOffsetTextLabel->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout->addWidget(TrackOffsetTextLabel, 4, 4, 1, 1);

        TrackLimitTextLabel = new QLabel(qtractorMidiControlForm);
        TrackLimitTextLabel->setObjectName(QString::fromUtf8("TrackLimitTextLabel"));
        TrackLimitTextLabel->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout->addWidget(TrackLimitTextLabel, 4, 5, 1, 1);

        CommandTextLabel = new QLabel(qtractorMidiControlForm);
        CommandTextLabel->setObjectName(QString::fromUtf8("CommandTextLabel"));
        CommandTextLabel->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout->addWidget(CommandTextLabel, 4, 6, 1, 1);

        FlagsTextLabel = new QLabel(qtractorMidiControlForm);
        FlagsTextLabel->setObjectName(QString::fromUtf8("FlagsTextLabel"));
        FlagsTextLabel->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout->addWidget(FlagsTextLabel, 4, 7, 1, 2);

        spacerItem = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 4, 9, 1, 3);

        ControlTypeComboBox = new QComboBox(qtractorMidiControlForm);
        ControlTypeComboBox->setObjectName(QString::fromUtf8("ControlTypeComboBox"));

        gridLayout->addWidget(ControlTypeComboBox, 5, 0, 1, 1);

        ChannelComboBox = new QComboBox(qtractorMidiControlForm);
        ChannelComboBox->setObjectName(QString::fromUtf8("ChannelComboBox"));

        gridLayout->addWidget(ChannelComboBox, 5, 1, 1, 1);

        ParamComboBox = new QComboBox(qtractorMidiControlForm);
        ParamComboBox->setObjectName(QString::fromUtf8("ParamComboBox"));

        gridLayout->addWidget(ParamComboBox, 5, 2, 1, 1);

        TrackParamCheckBox = new QCheckBox(qtractorMidiControlForm);
        TrackParamCheckBox->setObjectName(QString::fromUtf8("TrackParamCheckBox"));

        gridLayout->addWidget(TrackParamCheckBox, 5, 3, 1, 1);

        TrackOffsetSpinBox = new QSpinBox(qtractorMidiControlForm);
        TrackOffsetSpinBox->setObjectName(QString::fromUtf8("TrackOffsetSpinBox"));
        TrackOffsetSpinBox->setMinimum(0);
        TrackOffsetSpinBox->setMaximum(127);

        gridLayout->addWidget(TrackOffsetSpinBox, 5, 4, 1, 1);

        TrackLimitSpinBox = new QSpinBox(qtractorMidiControlForm);
        TrackLimitSpinBox->setObjectName(QString::fromUtf8("TrackLimitSpinBox"));
        TrackLimitSpinBox->setMinimum(0);
        TrackLimitSpinBox->setMaximum(127);

        gridLayout->addWidget(TrackLimitSpinBox, 5, 5, 1, 1);

        CommandComboBox = new QComboBox(qtractorMidiControlForm);
        CommandComboBox->setObjectName(QString::fromUtf8("CommandComboBox"));

        gridLayout->addWidget(CommandComboBox, 5, 6, 1, 1);

        DeltaCheckBox = new QCheckBox(qtractorMidiControlForm);
        DeltaCheckBox->setObjectName(QString::fromUtf8("DeltaCheckBox"));

        gridLayout->addWidget(DeltaCheckBox, 5, 7, 1, 1);

        FeedbackCheckBox = new QCheckBox(qtractorMidiControlForm);
        FeedbackCheckBox->setObjectName(QString::fromUtf8("FeedbackCheckBox"));

        gridLayout->addWidget(FeedbackCheckBox, 5, 8, 1, 1);

        MapPushButton = new QPushButton(qtractorMidiControlForm);
        MapPushButton->setObjectName(QString::fromUtf8("MapPushButton"));
        const QIcon icon5 = QIcon(QString::fromUtf8(":/images/formAccept.png"));
        MapPushButton->setIcon(icon5);

        gridLayout->addWidget(MapPushButton, 5, 9, 1, 3);

        ControlMapListView = new QTreeWidget(qtractorMidiControlForm);
        ControlMapListView->setObjectName(QString::fromUtf8("ControlMapListView"));
        ControlMapListView->setMinimumSize(QSize(0, 160));
        ControlMapListView->setRootIsDecorated(false);
        ControlMapListView->setUniformRowHeights(true);
        ControlMapListView->setItemsExpandable(false);
        ControlMapListView->setSortingEnabled(true);
        ControlMapListView->setAllColumnsShowFocus(true);

        gridLayout->addWidget(ControlMapListView, 6, 0, 7, 9);

        UnmapPushButton = new QPushButton(qtractorMidiControlForm);
        UnmapPushButton->setObjectName(QString::fromUtf8("UnmapPushButton"));
        const QIcon icon6 = QIcon(QString::fromUtf8(":/images/formReject.png"));
        UnmapPushButton->setIcon(icon6);

        gridLayout->addWidget(UnmapPushButton, 6, 9, 1, 3);

        spacerItem1 = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 7, 9, 1, 3);

        SyncCheckBox = new QCheckBox(qtractorMidiControlForm);
        SyncCheckBox->setObjectName(QString::fromUtf8("SyncCheckBox"));

        gridLayout->addWidget(SyncCheckBox, 8, 10, 1, 1);

        spacerItem2 = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem2, 9, 9, 1, 3);

        ReloadPushButton = new QPushButton(qtractorMidiControlForm);
        ReloadPushButton->setObjectName(QString::fromUtf8("ReloadPushButton"));
        const QIcon icon7 = QIcon(QString::fromUtf8(":/images/formRefresh.png"));
        ReloadPushButton->setIcon(icon7);

        gridLayout->addWidget(ReloadPushButton, 10, 9, 1, 3);

        ExportPushButton = new QPushButton(qtractorMidiControlForm);
        ExportPushButton->setObjectName(QString::fromUtf8("ExportPushButton"));
        const QIcon icon8 = QIcon(QString::fromUtf8(":/images/formSave.png"));
        ExportPushButton->setIcon(icon8);

        gridLayout->addWidget(ExportPushButton, 11, 9, 1, 3);

        ClosePushButton = new QPushButton(qtractorMidiControlForm);
        ClosePushButton->setObjectName(QString::fromUtf8("ClosePushButton"));

        gridLayout->addWidget(ClosePushButton, 12, 9, 1, 3);

#if QT_CONFIG(shortcut)
        ControlTypeTextLabel->setBuddy(ControlTypeComboBox);
        ChannelTextLabel->setBuddy(ChannelComboBox);
        ParamTextLabel->setBuddy(ParamComboBox);
        TrackParamTextLabel->setBuddy(TrackOffsetSpinBox);
        TrackOffsetTextLabel->setBuddy(TrackOffsetSpinBox);
        TrackLimitTextLabel->setBuddy(TrackLimitSpinBox);
        CommandTextLabel->setBuddy(CommandComboBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(FilesListView, ImportPushButton);
        QWidget::setTabOrder(ImportPushButton, RemovePushButton);
        QWidget::setTabOrder(RemovePushButton, MoveUpPushButton);
        QWidget::setTabOrder(MoveUpPushButton, MoveDownPushButton);
        QWidget::setTabOrder(MoveDownPushButton, ControlTypeComboBox);
        QWidget::setTabOrder(ControlTypeComboBox, ChannelComboBox);
        QWidget::setTabOrder(ChannelComboBox, ParamComboBox);
        QWidget::setTabOrder(ParamComboBox, TrackParamCheckBox);
        QWidget::setTabOrder(TrackParamCheckBox, TrackOffsetSpinBox);
        QWidget::setTabOrder(TrackOffsetSpinBox, TrackLimitSpinBox);
        QWidget::setTabOrder(TrackLimitSpinBox, CommandComboBox);
        QWidget::setTabOrder(CommandComboBox, DeltaCheckBox);
        QWidget::setTabOrder(DeltaCheckBox, FeedbackCheckBox);
        QWidget::setTabOrder(FeedbackCheckBox, MapPushButton);
        QWidget::setTabOrder(MapPushButton, ControlMapListView);
        QWidget::setTabOrder(ControlMapListView, UnmapPushButton);
        QWidget::setTabOrder(UnmapPushButton, SyncCheckBox);
        QWidget::setTabOrder(SyncCheckBox, ReloadPushButton);
        QWidget::setTabOrder(ReloadPushButton, ExportPushButton);
        QWidget::setTabOrder(ExportPushButton, ClosePushButton);

        retranslateUi(qtractorMidiControlForm);

        QMetaObject::connectSlotsByName(qtractorMidiControlForm);
    } // setupUi

    void retranslateUi(QDialog *qtractorMidiControlForm)
    {
        qtractorMidiControlForm->setWindowTitle(QCoreApplication::translate("qtractorMidiControlForm", "Controllers", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = FilesListView->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("qtractorMidiControlForm", "Path", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("qtractorMidiControlForm", "Files", nullptr));
#if QT_CONFIG(tooltip)
        FilesListView->setToolTip(QCoreApplication::translate("qtractorMidiControlForm", "Controller files", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        ImportPushButton->setToolTip(QCoreApplication::translate("qtractorMidiControlForm", "Import controller files", nullptr));
#endif // QT_CONFIG(tooltip)
        ImportPushButton->setText(QCoreApplication::translate("qtractorMidiControlForm", "&Import...", nullptr));
#if QT_CONFIG(tooltip)
        RemovePushButton->setToolTip(QCoreApplication::translate("qtractorMidiControlForm", "Remove controller file", nullptr));
#endif // QT_CONFIG(tooltip)
        RemovePushButton->setText(QCoreApplication::translate("qtractorMidiControlForm", "&Remove", nullptr));
#if QT_CONFIG(tooltip)
        MoveUpPushButton->setToolTip(QCoreApplication::translate("qtractorMidiControlForm", "Move controller file up on list order", nullptr));
#endif // QT_CONFIG(tooltip)
        MoveUpPushButton->setText(QCoreApplication::translate("qtractorMidiControlForm", "&Up", nullptr));
#if QT_CONFIG(tooltip)
        MoveDownPushButton->setToolTip(QCoreApplication::translate("qtractorMidiControlForm", "Move controller file down on list order", nullptr));
#endif // QT_CONFIG(tooltip)
        MoveDownPushButton->setText(QCoreApplication::translate("qtractorMidiControlForm", "&Down", nullptr));
        ControlTypeTextLabel->setText(QCoreApplication::translate("qtractorMidiControlForm", "&Type", nullptr));
        ChannelTextLabel->setText(QCoreApplication::translate("qtractorMidiControlForm", "&Channel", nullptr));
        ParamTextLabel->setText(QCoreApplication::translate("qtractorMidiControlForm", "&Parameter", nullptr));
        TrackParamTextLabel->setText(QCoreApplication::translate("qtractorMidiControlForm", "Trac&k", nullptr));
        TrackOffsetTextLabel->setText(QCoreApplication::translate("qtractorMidiControlForm", "offse&t", nullptr));
        TrackLimitTextLabel->setText(QCoreApplication::translate("qtractorMidiControlForm", "&limit", nullptr));
        CommandTextLabel->setText(QCoreApplication::translate("qtractorMidiControlForm", "C&ommand", nullptr));
        FlagsTextLabel->setText(QCoreApplication::translate("qtractorMidiControlForm", "Flags", nullptr));
#if QT_CONFIG(tooltip)
        ControlTypeComboBox->setToolTip(QCoreApplication::translate("qtractorMidiControlForm", "MIDI Event type", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        ChannelComboBox->setToolTip(QCoreApplication::translate("qtractorMidiControlForm", "MIDI Channel", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        ParamComboBox->setToolTip(QCoreApplication::translate("qtractorMidiControlForm", "MIDI Controller (parameter)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        TrackParamCheckBox->setToolTip(QCoreApplication::translate("qtractorMidiControlForm", "MIDI parameter (track offset)", nullptr));
#endif // QT_CONFIG(tooltip)
        TrackParamCheckBox->setText(QCoreApplication::translate("qtractorMidiControlForm", "+", nullptr));
#if QT_CONFIG(tooltip)
        TrackOffsetSpinBox->setToolTip(QCoreApplication::translate("qtractorMidiControlForm", "Track offset", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        TrackLimitSpinBox->setToolTip(QCoreApplication::translate("qtractorMidiControlForm", "Track limit", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        CommandComboBox->setToolTip(QCoreApplication::translate("qtractorMidiControlForm", "Command action", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        DeltaCheckBox->setToolTip(QCoreApplication::translate("qtractorMidiControlForm", "Command delta/momentary", nullptr));
#endif // QT_CONFIG(tooltip)
        DeltaCheckBox->setText(QCoreApplication::translate("qtractorMidiControlForm", "D&elta", nullptr));
#if QT_CONFIG(tooltip)
        FeedbackCheckBox->setToolTip(QCoreApplication::translate("qtractorMidiControlForm", "Command feedback", nullptr));
#endif // QT_CONFIG(tooltip)
        FeedbackCheckBox->setText(QCoreApplication::translate("qtractorMidiControlForm", "&Feedback", nullptr));
#if QT_CONFIG(tooltip)
        MapPushButton->setToolTip(QCoreApplication::translate("qtractorMidiControlForm", "Map/update controller command", nullptr));
#endif // QT_CONFIG(tooltip)
        MapPushButton->setText(QCoreApplication::translate("qtractorMidiControlForm", "&Map", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = ControlMapListView->headerItem();
        ___qtreewidgetitem1->setText(5, QCoreApplication::translate("qtractorMidiControlForm", "Flags", nullptr));
        ___qtreewidgetitem1->setText(4, QCoreApplication::translate("qtractorMidiControlForm", "Command", nullptr));
        ___qtreewidgetitem1->setText(3, QCoreApplication::translate("qtractorMidiControlForm", "Track", nullptr));
        ___qtreewidgetitem1->setText(2, QCoreApplication::translate("qtractorMidiControlForm", "Parameter", nullptr));
        ___qtreewidgetitem1->setText(1, QCoreApplication::translate("qtractorMidiControlForm", "Channel", nullptr));
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("qtractorMidiControlForm", "Type", nullptr));
#if QT_CONFIG(tooltip)
        ControlMapListView->setToolTip(QCoreApplication::translate("qtractorMidiControlForm", "Controller map", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        UnmapPushButton->setToolTip(QCoreApplication::translate("qtractorMidiControlForm", "Unmap/remove controller command", nullptr));
#endif // QT_CONFIG(tooltip)
        UnmapPushButton->setText(QCoreApplication::translate("qtractorMidiControlForm", "U&nmap", nullptr));
#if QT_CONFIG(tooltip)
        SyncCheckBox->setToolTip(QCoreApplication::translate("qtractorMidiControlForm", "Enable all controllers immediate sync (hook)", nullptr));
#endif // QT_CONFIG(tooltip)
        SyncCheckBox->setText(QCoreApplication::translate("qtractorMidiControlForm", "&Sync", nullptr));
#if QT_CONFIG(tooltip)
        ReloadPushButton->setToolTip(QCoreApplication::translate("qtractorMidiControlForm", "Reload/apply all controller files", nullptr));
#endif // QT_CONFIG(tooltip)
        ReloadPushButton->setText(QCoreApplication::translate("qtractorMidiControlForm", "Relo&ad", nullptr));
#if QT_CONFIG(tooltip)
        ExportPushButton->setToolTip(QCoreApplication::translate("qtractorMidiControlForm", "Export to controller file", nullptr));
#endif // QT_CONFIG(tooltip)
        ExportPushButton->setText(QCoreApplication::translate("qtractorMidiControlForm", "E&xport...", nullptr));
#if QT_CONFIG(tooltip)
        ClosePushButton->setToolTip(QCoreApplication::translate("qtractorMidiControlForm", "Close this dialog", nullptr));
#endif // QT_CONFIG(tooltip)
        ClosePushButton->setText(QCoreApplication::translate("qtractorMidiControlForm", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qtractorMidiControlForm: public Ui_qtractorMidiControlForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTRACTORMIDICONTROLFORM_H
