/*
qtractor - An Audio/MIDI multi-track sequencer.

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
** Form generated from reading UI file 'qtractorTrackForm.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTRACTORTRACKFORM_H
#define UI_QTRACTORTRACKFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qtractorPluginListView.h"

QT_BEGIN_NAMESPACE

class Ui_qtractorTrackForm
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *TrackTabWidget;
    QWidget *TrackTab;
    QVBoxLayout *vboxLayout1;
    QGridLayout *gridLayout;
    QLabel *TrackNameTextLabel;
    QTextEdit *TrackNameTextEdit;
    QToolButton *TrackIconToolButton;
    QHBoxLayout *hboxLayout;
    QGroupBox *TrackTypeGroup;
    QHBoxLayout *hboxLayout1;
    QRadioButton *AudioRadioButton;
    QRadioButton *MidiRadioButton;
    QGroupBox *TrackBusGroup;
    QHBoxLayout *hboxLayout2;
    QComboBox *InputBusNameComboBox;
    QComboBox *OutputBusNameComboBox;
    QToolButton *BusNameToolButton;
    QGroupBox *MidiGroupBox;
    QGridLayout *gridLayout1;
    QLabel *ProgTextLabel;
    QLabel *BankTextLabel;
    QLabel *BankSelMethodTextLabel;
    QCheckBox *OmniCheckBox;
    QLabel *ChannelTextLabel;
    QSpinBox *ChannelSpinBox;
    QComboBox *InstrumentComboBox;
    QComboBox *BankSelMethodComboBox;
    QCheckBox *DrumsCheckBox;
    QComboBox *BankComboBox;
    QComboBox *ProgComboBox;
    QGroupBox *TrackViewGroup;
    QHBoxLayout *hboxLayout3;
    QLabel *ForegroundColorTextLabel;
    QComboBox *ForegroundColorComboBox;
    QToolButton *ForegroundColorToolButton;
    QSpacerItem *spacerItem;
    QLabel *BackgroundColorTextLabel;
    QComboBox *BackgroundColorComboBox;
    QToolButton *BackgroundColorToolButton;
    QWidget *PluginsTab;
    QGridLayout *gridLayout2;
    qtractorPluginListView *PluginListView;
    QVBoxLayout *vboxLayout2;
    QToolButton *AddPluginToolButton;
    QToolButton *RemovePluginToolButton;
    QSpacerItem *spacerItem1;
    QToolButton *MoveUpPluginToolButton;
    QToolButton *MoveDownPluginToolButton;
    QCheckBox *PluginListLatencyCheckBox;
    QDialogButtonBox *DialogButtonBox;

    void setupUi(QDialog *qtractorTrackForm)
    {
        if (qtractorTrackForm->objectName().isEmpty())
            qtractorTrackForm->setObjectName(QString::fromUtf8("qtractorTrackForm"));
        qtractorTrackForm->resize(380, 320);
        qtractorTrackForm->setFocusPolicy(Qt::StrongFocus);
        const QIcon icon = QIcon(QString::fromUtf8(":/images/trackProperties.png"));
        qtractorTrackForm->setWindowIcon(icon);
        vboxLayout = new QVBoxLayout(qtractorTrackForm);
        vboxLayout->setSpacing(4);
        vboxLayout->setContentsMargins(8, 8, 8, 8);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        TrackTabWidget = new QTabWidget(qtractorTrackForm);
        TrackTabWidget->setObjectName(QString::fromUtf8("TrackTabWidget"));
        TrackTab = new QWidget();
        TrackTab->setObjectName(QString::fromUtf8("TrackTab"));
        vboxLayout1 = new QVBoxLayout(TrackTab);
        vboxLayout1->setSpacing(4);
        vboxLayout1->setContentsMargins(8, 8, 8, 8);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        TrackNameTextLabel = new QLabel(TrackTab);
        TrackNameTextLabel->setObjectName(QString::fromUtf8("TrackNameTextLabel"));

        gridLayout->addWidget(TrackNameTextLabel, 0, 0, 1, 6);

        TrackNameTextEdit = new QTextEdit(TrackTab);
        TrackNameTextEdit->setObjectName(QString::fromUtf8("TrackNameTextEdit"));
        TrackNameTextEdit->setMinimumSize(QSize(280, 0));
        TrackNameTextEdit->setMaximumSize(QSize(32767, 48));

        gridLayout->addWidget(TrackNameTextEdit, 1, 0, 1, 5);

        TrackIconToolButton = new QToolButton(TrackTab);
        TrackIconToolButton->setObjectName(QString::fromUtf8("TrackIconToolButton"));
        TrackIconToolButton->setMinimumSize(QSize(32, 32));
        TrackIconToolButton->setMaximumSize(QSize(48, 48));
        TrackIconToolButton->setFocusPolicy(Qt::TabFocus);

        gridLayout->addWidget(TrackIconToolButton, 1, 5, 1, 1);


        vboxLayout1->addLayout(gridLayout);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(4);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        TrackTypeGroup = new QGroupBox(TrackTab);
        TrackTypeGroup->setObjectName(QString::fromUtf8("TrackTypeGroup"));
        hboxLayout1 = new QHBoxLayout(TrackTypeGroup);
        hboxLayout1->setSpacing(4);
        hboxLayout1->setContentsMargins(8, 8, 8, 8);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        AudioRadioButton = new QRadioButton(TrackTypeGroup);
        AudioRadioButton->setObjectName(QString::fromUtf8("AudioRadioButton"));

        hboxLayout1->addWidget(AudioRadioButton);

        MidiRadioButton = new QRadioButton(TrackTypeGroup);
        MidiRadioButton->setObjectName(QString::fromUtf8("MidiRadioButton"));

        hboxLayout1->addWidget(MidiRadioButton);


        hboxLayout->addWidget(TrackTypeGroup);

        TrackBusGroup = new QGroupBox(TrackTab);
        TrackBusGroup->setObjectName(QString::fromUtf8("TrackBusGroup"));
        hboxLayout2 = new QHBoxLayout(TrackBusGroup);
        hboxLayout2->setSpacing(4);
        hboxLayout2->setContentsMargins(8, 8, 8, 8);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        InputBusNameComboBox = new QComboBox(TrackBusGroup);
        InputBusNameComboBox->setObjectName(QString::fromUtf8("InputBusNameComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(InputBusNameComboBox->sizePolicy().hasHeightForWidth());
        InputBusNameComboBox->setSizePolicy(sizePolicy);
        InputBusNameComboBox->setMinimumSize(QSize(80, 0));

        hboxLayout2->addWidget(InputBusNameComboBox);

        OutputBusNameComboBox = new QComboBox(TrackBusGroup);
        OutputBusNameComboBox->setObjectName(QString::fromUtf8("OutputBusNameComboBox"));
        sizePolicy.setHeightForWidth(OutputBusNameComboBox->sizePolicy().hasHeightForWidth());
        OutputBusNameComboBox->setSizePolicy(sizePolicy);
        OutputBusNameComboBox->setMinimumSize(QSize(80, 0));

        hboxLayout2->addWidget(OutputBusNameComboBox);

        BusNameToolButton = new QToolButton(TrackBusGroup);
        BusNameToolButton->setObjectName(QString::fromUtf8("BusNameToolButton"));
        BusNameToolButton->setMinimumSize(QSize(22, 22));
        BusNameToolButton->setMaximumSize(QSize(24, 24));
        BusNameToolButton->setFocusPolicy(Qt::TabFocus);

        hboxLayout2->addWidget(BusNameToolButton);


        hboxLayout->addWidget(TrackBusGroup);


        vboxLayout1->addLayout(hboxLayout);

        MidiGroupBox = new QGroupBox(TrackTab);
        MidiGroupBox->setObjectName(QString::fromUtf8("MidiGroupBox"));
        gridLayout1 = new QGridLayout(MidiGroupBox);
        gridLayout1->setSpacing(4);
        gridLayout1->setContentsMargins(8, 8, 8, 8);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        ProgTextLabel = new QLabel(MidiGroupBox);
        ProgTextLabel->setObjectName(QString::fromUtf8("ProgTextLabel"));

        gridLayout1->addWidget(ProgTextLabel, 3, 0, 1, 1);

        BankTextLabel = new QLabel(MidiGroupBox);
        BankTextLabel->setObjectName(QString::fromUtf8("BankTextLabel"));

        gridLayout1->addWidget(BankTextLabel, 2, 0, 1, 1);

        BankSelMethodTextLabel = new QLabel(MidiGroupBox);
        BankSelMethodTextLabel->setObjectName(QString::fromUtf8("BankSelMethodTextLabel"));

        gridLayout1->addWidget(BankSelMethodTextLabel, 1, 0, 1, 2);

        OmniCheckBox = new QCheckBox(MidiGroupBox);
        OmniCheckBox->setObjectName(QString::fromUtf8("OmniCheckBox"));

        gridLayout1->addWidget(OmniCheckBox, 0, 0, 1, 1);

        ChannelTextLabel = new QLabel(MidiGroupBox);
        ChannelTextLabel->setObjectName(QString::fromUtf8("ChannelTextLabel"));

        gridLayout1->addWidget(ChannelTextLabel, 0, 1, 1, 1);

        ChannelSpinBox = new QSpinBox(MidiGroupBox);
        ChannelSpinBox->setObjectName(QString::fromUtf8("ChannelSpinBox"));
        ChannelSpinBox->setMaximumSize(QSize(48, 24));
        ChannelSpinBox->setMinimum(1);
        ChannelSpinBox->setMaximum(16);

        gridLayout1->addWidget(ChannelSpinBox, 0, 2, 1, 1);

        InstrumentComboBox = new QComboBox(MidiGroupBox);
        InstrumentComboBox->setObjectName(QString::fromUtf8("InstrumentComboBox"));

        gridLayout1->addWidget(InstrumentComboBox, 0, 3, 1, 3);

        BankSelMethodComboBox = new QComboBox(MidiGroupBox);
        BankSelMethodComboBox->setObjectName(QString::fromUtf8("BankSelMethodComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(BankSelMethodComboBox->sizePolicy().hasHeightForWidth());
        BankSelMethodComboBox->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(BankSelMethodComboBox, 1, 2, 1, 3);

        DrumsCheckBox = new QCheckBox(MidiGroupBox);
        DrumsCheckBox->setObjectName(QString::fromUtf8("DrumsCheckBox"));

        gridLayout1->addWidget(DrumsCheckBox, 1, 5, 1, 1);

        BankComboBox = new QComboBox(MidiGroupBox);
        BankComboBox->setObjectName(QString::fromUtf8("BankComboBox"));
        BankComboBox->setEditable(true);

        gridLayout1->addWidget(BankComboBox, 2, 1, 1, 5);

        ProgComboBox = new QComboBox(MidiGroupBox);
        ProgComboBox->setObjectName(QString::fromUtf8("ProgComboBox"));
        ProgComboBox->setEditable(true);

        gridLayout1->addWidget(ProgComboBox, 3, 1, 1, 5);


        vboxLayout1->addWidget(MidiGroupBox);

        TrackViewGroup = new QGroupBox(TrackTab);
        TrackViewGroup->setObjectName(QString::fromUtf8("TrackViewGroup"));
        hboxLayout3 = new QHBoxLayout(TrackViewGroup);
        hboxLayout3->setSpacing(4);
        hboxLayout3->setContentsMargins(8, 8, 8, 8);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        ForegroundColorTextLabel = new QLabel(TrackViewGroup);
        ForegroundColorTextLabel->setObjectName(QString::fromUtf8("ForegroundColorTextLabel"));

        hboxLayout3->addWidget(ForegroundColorTextLabel);

        ForegroundColorComboBox = new QComboBox(TrackViewGroup);
        ForegroundColorComboBox->setObjectName(QString::fromUtf8("ForegroundColorComboBox"));
        ForegroundColorComboBox->setMinimumSize(QSize(64, 0));
        ForegroundColorComboBox->setEditable(true);

        hboxLayout3->addWidget(ForegroundColorComboBox);

        ForegroundColorToolButton = new QToolButton(TrackViewGroup);
        ForegroundColorToolButton->setObjectName(QString::fromUtf8("ForegroundColorToolButton"));
        ForegroundColorToolButton->setMinimumSize(QSize(22, 22));
        ForegroundColorToolButton->setMaximumSize(QSize(24, 24));
        ForegroundColorToolButton->setFocusPolicy(Qt::TabFocus);
        const QIcon icon1 = QIcon(QString::fromUtf8(":/images/formColor.png"));
        ForegroundColorToolButton->setIcon(icon1);

        hboxLayout3->addWidget(ForegroundColorToolButton);

        spacerItem = new QSpacerItem(8, 8, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem);

        BackgroundColorTextLabel = new QLabel(TrackViewGroup);
        BackgroundColorTextLabel->setObjectName(QString::fromUtf8("BackgroundColorTextLabel"));
        BackgroundColorTextLabel->setAlignment(Qt::AlignRight|Qt::AlignVCenter);

        hboxLayout3->addWidget(BackgroundColorTextLabel);

        BackgroundColorComboBox = new QComboBox(TrackViewGroup);
        BackgroundColorComboBox->setObjectName(QString::fromUtf8("BackgroundColorComboBox"));
        BackgroundColorComboBox->setMinimumSize(QSize(64, 0));
        BackgroundColorComboBox->setEditable(true);

        hboxLayout3->addWidget(BackgroundColorComboBox);

        BackgroundColorToolButton = new QToolButton(TrackViewGroup);
        BackgroundColorToolButton->setObjectName(QString::fromUtf8("BackgroundColorToolButton"));
        BackgroundColorToolButton->setMinimumSize(QSize(22, 22));
        BackgroundColorToolButton->setMaximumSize(QSize(24, 24));
        BackgroundColorToolButton->setFocusPolicy(Qt::TabFocus);
        BackgroundColorToolButton->setIcon(icon1);

        hboxLayout3->addWidget(BackgroundColorToolButton);


        vboxLayout1->addWidget(TrackViewGroup);

        TrackTabWidget->addTab(TrackTab, QString());
        PluginsTab = new QWidget();
        PluginsTab->setObjectName(QString::fromUtf8("PluginsTab"));
        gridLayout2 = new QGridLayout(PluginsTab);
        gridLayout2->setSpacing(4);
        gridLayout2->setContentsMargins(8, 8, 8, 8);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        PluginListView = new qtractorPluginListView(PluginsTab);
        PluginListView->setObjectName(QString::fromUtf8("PluginListView"));
        PluginListView->setFocusPolicy(Qt::WheelFocus);

        gridLayout2->addWidget(PluginListView, 0, 0, 1, 2);

        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setSpacing(4);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        AddPluginToolButton = new QToolButton(PluginsTab);
        AddPluginToolButton->setObjectName(QString::fromUtf8("AddPluginToolButton"));
        AddPluginToolButton->setMinimumSize(QSize(90, 28));
        const QIcon icon2 = QIcon(QString::fromUtf8(":/images/formCreate.png"));
        AddPluginToolButton->setIcon(icon2);
        AddPluginToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        vboxLayout2->addWidget(AddPluginToolButton);

        RemovePluginToolButton = new QToolButton(PluginsTab);
        RemovePluginToolButton->setObjectName(QString::fromUtf8("RemovePluginToolButton"));
        RemovePluginToolButton->setMinimumSize(QSize(90, 28));
        const QIcon icon3 = QIcon(QString::fromUtf8(":/images/formRemove.png"));
        RemovePluginToolButton->setIcon(icon3);
        RemovePluginToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        vboxLayout2->addWidget(RemovePluginToolButton);

        spacerItem1 = new QSpacerItem(8, 8, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout2->addItem(spacerItem1);

        MoveUpPluginToolButton = new QToolButton(PluginsTab);
        MoveUpPluginToolButton->setObjectName(QString::fromUtf8("MoveUpPluginToolButton"));
        MoveUpPluginToolButton->setMinimumSize(QSize(90, 28));
        const QIcon icon4 = QIcon(QString::fromUtf8(":/images/formMoveUp.png"));
        MoveUpPluginToolButton->setIcon(icon4);
        MoveUpPluginToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        vboxLayout2->addWidget(MoveUpPluginToolButton);

        MoveDownPluginToolButton = new QToolButton(PluginsTab);
        MoveDownPluginToolButton->setObjectName(QString::fromUtf8("MoveDownPluginToolButton"));
        MoveDownPluginToolButton->setMinimumSize(QSize(90, 28));
        const QIcon icon5 = QIcon(QString::fromUtf8(":/images/formMoveDown.png"));
        MoveDownPluginToolButton->setIcon(icon5);
        MoveDownPluginToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        vboxLayout2->addWidget(MoveDownPluginToolButton);


        gridLayout2->addLayout(vboxLayout2, 0, 2, 1, 1);

        PluginListLatencyCheckBox = new QCheckBox(PluginsTab);
        PluginListLatencyCheckBox->setObjectName(QString::fromUtf8("PluginListLatencyCheckBox"));

        gridLayout2->addWidget(PluginListLatencyCheckBox, 1, 0, 1, 3);

        TrackTabWidget->addTab(PluginsTab, QString());

        vboxLayout->addWidget(TrackTabWidget);

        DialogButtonBox = new QDialogButtonBox(qtractorTrackForm);
        DialogButtonBox->setObjectName(QString::fromUtf8("DialogButtonBox"));
        DialogButtonBox->setOrientation(Qt::Horizontal);
        DialogButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(DialogButtonBox);

#if QT_CONFIG(shortcut)
        TrackNameTextLabel->setBuddy(TrackNameTextEdit);
        ProgTextLabel->setBuddy(ProgComboBox);
        BankTextLabel->setBuddy(BankComboBox);
        BankSelMethodTextLabel->setBuddy(BankSelMethodComboBox);
        ChannelTextLabel->setBuddy(ChannelSpinBox);
        ForegroundColorTextLabel->setBuddy(ForegroundColorComboBox);
        BackgroundColorTextLabel->setBuddy(BackgroundColorComboBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(TrackNameTextEdit, TrackIconToolButton);
        QWidget::setTabOrder(TrackIconToolButton, AudioRadioButton);
        QWidget::setTabOrder(AudioRadioButton, MidiRadioButton);
        QWidget::setTabOrder(MidiRadioButton, InputBusNameComboBox);
        QWidget::setTabOrder(InputBusNameComboBox, OutputBusNameComboBox);
        QWidget::setTabOrder(OutputBusNameComboBox, BusNameToolButton);
        QWidget::setTabOrder(BusNameToolButton, OmniCheckBox);
        QWidget::setTabOrder(OmniCheckBox, ChannelSpinBox);
        QWidget::setTabOrder(ChannelSpinBox, InstrumentComboBox);
        QWidget::setTabOrder(InstrumentComboBox, BankSelMethodComboBox);
        QWidget::setTabOrder(BankSelMethodComboBox, DrumsCheckBox);
        QWidget::setTabOrder(DrumsCheckBox, BankComboBox);
        QWidget::setTabOrder(BankComboBox, ProgComboBox);
        QWidget::setTabOrder(ProgComboBox, ForegroundColorComboBox);
        QWidget::setTabOrder(ForegroundColorComboBox, ForegroundColorToolButton);
        QWidget::setTabOrder(ForegroundColorToolButton, BackgroundColorComboBox);
        QWidget::setTabOrder(BackgroundColorComboBox, BackgroundColorToolButton);
        QWidget::setTabOrder(BackgroundColorToolButton, PluginListView);
        QWidget::setTabOrder(PluginListView, AddPluginToolButton);
        QWidget::setTabOrder(AddPluginToolButton, RemovePluginToolButton);
        QWidget::setTabOrder(RemovePluginToolButton, MoveUpPluginToolButton);
        QWidget::setTabOrder(MoveUpPluginToolButton, MoveDownPluginToolButton);
        QWidget::setTabOrder(MoveDownPluginToolButton, PluginListLatencyCheckBox);
        QWidget::setTabOrder(PluginListLatencyCheckBox, DialogButtonBox);

        retranslateUi(qtractorTrackForm);

        TrackTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(qtractorTrackForm);
    } // setupUi

    void retranslateUi(QDialog *qtractorTrackForm)
    {
        qtractorTrackForm->setWindowTitle(QCoreApplication::translate("qtractorTrackForm", "Track", nullptr));
        TrackNameTextLabel->setText(QCoreApplication::translate("qtractorTrackForm", "&Name:", nullptr));
#if QT_CONFIG(tooltip)
        TrackNameTextEdit->setToolTip(QCoreApplication::translate("qtractorTrackForm", "Track name description", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        TrackIconToolButton->setToolTip(QCoreApplication::translate("qtractorTrackForm", "Track icon", nullptr));
#endif // QT_CONFIG(tooltip)
        TrackTypeGroup->setTitle(QCoreApplication::translate("qtractorTrackForm", "Type", nullptr));
#if QT_CONFIG(tooltip)
        AudioRadioButton->setToolTip(QCoreApplication::translate("qtractorTrackForm", "Audio track type", nullptr));
#endif // QT_CONFIG(tooltip)
        AudioRadioButton->setText(QCoreApplication::translate("qtractorTrackForm", "&Audio", nullptr));
#if QT_CONFIG(tooltip)
        MidiRadioButton->setToolTip(QCoreApplication::translate("qtractorTrackForm", "MIDI track type", nullptr));
#endif // QT_CONFIG(tooltip)
        MidiRadioButton->setText(QCoreApplication::translate("qtractorTrackForm", "&MIDI", nullptr));
        TrackBusGroup->setTitle(QCoreApplication::translate("qtractorTrackForm", "Input / Output", nullptr));
#if QT_CONFIG(tooltip)
        InputBusNameComboBox->setToolTip(QCoreApplication::translate("qtractorTrackForm", "Input bus name", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        OutputBusNameComboBox->setToolTip(QCoreApplication::translate("qtractorTrackForm", "Output bus name", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BusNameToolButton->setToolTip(QCoreApplication::translate("qtractorTrackForm", "Manage buses", nullptr));
#endif // QT_CONFIG(tooltip)
        BusNameToolButton->setText(QCoreApplication::translate("qtractorTrackForm", "...", nullptr));
        MidiGroupBox->setTitle(QCoreApplication::translate("qtractorTrackForm", "MIDI / Instrument", nullptr));
        ProgTextLabel->setText(QCoreApplication::translate("qtractorTrackForm", "&Program:", nullptr));
        BankTextLabel->setText(QCoreApplication::translate("qtractorTrackForm", "&Bank:", nullptr));
        BankSelMethodTextLabel->setText(QCoreApplication::translate("qtractorTrackForm", "Bank &Select Method:", nullptr));
#if QT_CONFIG(tooltip)
        OmniCheckBox->setToolTip(QCoreApplication::translate("qtractorTrackForm", "MIDI Omni: Capture All Channels", nullptr));
#endif // QT_CONFIG(tooltip)
        OmniCheckBox->setText(QCoreApplication::translate("qtractorTrackForm", "&Omni", nullptr));
        ChannelTextLabel->setText(QCoreApplication::translate("qtractorTrackForm", "&Channel:", nullptr));
#if QT_CONFIG(tooltip)
        ChannelSpinBox->setToolTip(QCoreApplication::translate("qtractorTrackForm", "MIDI Channel (1-16)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        InstrumentComboBox->setToolTip(QCoreApplication::translate("qtractorTrackForm", "MIDI Patch: Instrument", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BankSelMethodComboBox->setToolTip(QCoreApplication::translate("qtractorTrackForm", "MIDI Patch: Bank Select Method", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        DrumsCheckBox->setToolTip(QCoreApplication::translate("qtractorTrackForm", "MIDI Patch: Drum Mode", nullptr));
#endif // QT_CONFIG(tooltip)
        DrumsCheckBox->setText(QCoreApplication::translate("qtractorTrackForm", "&Drums", nullptr));
#if QT_CONFIG(tooltip)
        BankComboBox->setToolTip(QCoreApplication::translate("qtractorTrackForm", "MIDI Patch: Bank", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        ProgComboBox->setToolTip(QCoreApplication::translate("qtractorTrackForm", "MIDI Patch: Program", nullptr));
#endif // QT_CONFIG(tooltip)
        TrackViewGroup->setTitle(QCoreApplication::translate("qtractorTrackForm", "View / Colors", nullptr));
        ForegroundColorTextLabel->setText(QCoreApplication::translate("qtractorTrackForm", "&Foreground:", nullptr));
#if QT_CONFIG(tooltip)
        ForegroundColorComboBox->setToolTip(QCoreApplication::translate("qtractorTrackForm", "Foreground color", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        ForegroundColorToolButton->setToolTip(QCoreApplication::translate("qtractorTrackForm", "Select custom track foreground color", nullptr));
#endif // QT_CONFIG(tooltip)
        ForegroundColorToolButton->setText(QCoreApplication::translate("qtractorTrackForm", "...", nullptr));
        BackgroundColorTextLabel->setText(QCoreApplication::translate("qtractorTrackForm", "Bac&kground:", nullptr));
#if QT_CONFIG(tooltip)
        BackgroundColorComboBox->setToolTip(QCoreApplication::translate("qtractorTrackForm", "Background color", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        BackgroundColorToolButton->setToolTip(QCoreApplication::translate("qtractorTrackForm", "Select custom track background color", nullptr));
#endif // QT_CONFIG(tooltip)
        BackgroundColorToolButton->setText(QCoreApplication::translate("qtractorTrackForm", "...", nullptr));
        TrackTabWidget->setTabText(TrackTabWidget->indexOf(TrackTab), QCoreApplication::translate("qtractorTrackForm", "Track", nullptr));
#if QT_CONFIG(tooltip)
        PluginListView->setToolTip(QCoreApplication::translate("qtractorTrackForm", "Track plugins", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        AddPluginToolButton->setToolTip(QCoreApplication::translate("qtractorTrackForm", "Add plugin", nullptr));
#endif // QT_CONFIG(tooltip)
        AddPluginToolButton->setText(QCoreApplication::translate("qtractorTrackForm", "&Add...", nullptr));
#if QT_CONFIG(tooltip)
        RemovePluginToolButton->setToolTip(QCoreApplication::translate("qtractorTrackForm", "Remove plugin", nullptr));
#endif // QT_CONFIG(tooltip)
        RemovePluginToolButton->setText(QCoreApplication::translate("qtractorTrackForm", "&Remove", nullptr));
#if QT_CONFIG(tooltip)
        MoveUpPluginToolButton->setToolTip(QCoreApplication::translate("qtractorTrackForm", "Move plugin up", nullptr));
#endif // QT_CONFIG(tooltip)
        MoveUpPluginToolButton->setText(QCoreApplication::translate("qtractorTrackForm", "&Up", nullptr));
#if QT_CONFIG(tooltip)
        MoveDownPluginToolButton->setToolTip(QCoreApplication::translate("qtractorTrackForm", "Move plugin down", nullptr));
#endif // QT_CONFIG(tooltip)
        MoveDownPluginToolButton->setText(QCoreApplication::translate("qtractorTrackForm", "&Down", nullptr));
#if QT_CONFIG(tooltip)
        PluginListLatencyCheckBox->setToolTip(QCoreApplication::translate("qtractorTrackForm", "Whether to enable plugin latency/delay compensation", nullptr));
#endif // QT_CONFIG(tooltip)
        PluginListLatencyCheckBox->setText(QCoreApplication::translate("qtractorTrackForm", "&Latency compensation", nullptr));
        TrackTabWidget->setTabText(TrackTabWidget->indexOf(PluginsTab), QCoreApplication::translate("qtractorTrackForm", "Plugins", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qtractorTrackForm: public Ui_qtractorTrackForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTRACTORTRACKFORM_H
