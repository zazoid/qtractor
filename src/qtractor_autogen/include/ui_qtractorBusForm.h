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
** Form generated from reading UI file 'qtractorBusForm.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTRACTORBUSFORM_H
#define UI_QTRACTORBUSFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qtractorPluginListView.h"

QT_BEGIN_NAMESPACE

class Ui_qtractorBusForm
{
public:
    QVBoxLayout *vboxLayout;
    QSplitter *BusSplitter;
    QTreeWidget *BusListView;
    QWidget *BusLayout;
    QVBoxLayout *vboxLayout1;
    QLabel *BusTitleTextLabel;
    QTabWidget *BusTabWidget;
    QWidget *PropertiesTab;
    QGridLayout *gridLayout;
    QGroupBox *CommonBusGroup;
    QGridLayout *gridLayout1;
    QLabel *BusNameTextLabel;
    QLineEdit *BusNameLineEdit;
    QLabel *BusModeTextLabel;
    QSpacerItem *spacerItem;
    QComboBox *BusModeComboBox;
    QCheckBox *MonitorCheckBox;
    QGroupBox *AudioBusGroup;
    QGridLayout *gridLayout2;
    QLabel *AudioChannelsTextLabel;
    QSpinBox *AudioChannelsSpinBox;
    QSpacerItem *spacerItem1;
    QCheckBox *AudioAutoConnectCheckBox;
    QGroupBox *MidiBusGroup;
    QGridLayout *gridLayout3;
    QComboBox *MidiInstrumentComboBox;
    QPushButton *MidiSysexPushButton;
    QLabel *MidiSysexTextLabel;
    QSpacerItem *spacerItem2;
    QWidget *InputPluginsTab;
    QHBoxLayout *hboxLayout;
    qtractorPluginListView *InputPluginListView;
    QVBoxLayout *vboxLayout2;
    QToolButton *AddInputPluginToolButton;
    QToolButton *RemoveInputPluginToolButton;
    QSpacerItem *spacerItem3;
    QToolButton *MoveUpInputPluginToolButton;
    QToolButton *MoveDownInputPluginToolButton;
    QWidget *OutputPluginsTab;
    QHBoxLayout *hboxLayout1;
    qtractorPluginListView *OutputPluginListView;
    QVBoxLayout *vboxLayout3;
    QToolButton *AddOutputPluginToolButton;
    QToolButton *RemoveOutputPluginToolButton;
    QSpacerItem *spacerItem4;
    QToolButton *MoveUpOutputPluginToolButton;
    QToolButton *MoveDownOutputPluginToolButton;
    QHBoxLayout *hboxLayout2;
    QPushButton *MoveUpPushButton;
    QPushButton *MoveDownPushButton;
    QSpacerItem *spacerItem5;
    QPushButton *CreatePushButton;
    QPushButton *UpdatePushButton;
    QPushButton *DeletePushButton;
    QPushButton *ClosePushButton;

    void setupUi(QDialog *qtractorBusForm)
    {
        if (qtractorBusForm->objectName().isEmpty())
            qtractorBusForm->setObjectName(QString::fromUtf8("qtractorBusForm"));
        qtractorBusForm->resize(480, 320);
        qtractorBusForm->setFocusPolicy(Qt::StrongFocus);
        const QIcon icon = QIcon(QString::fromUtf8(":/images/qtractorTracks.png"));
        qtractorBusForm->setWindowIcon(icon);
        vboxLayout = new QVBoxLayout(qtractorBusForm);
        vboxLayout->setSpacing(4);
        vboxLayout->setContentsMargins(8, 8, 8, 8);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        BusSplitter = new QSplitter(qtractorBusForm);
        BusSplitter->setObjectName(QString::fromUtf8("BusSplitter"));
        BusSplitter->setOrientation(Qt::Horizontal);
        BusSplitter->setHandleWidth(4);
        BusListView = new QTreeWidget(BusSplitter);
        BusListView->setObjectName(QString::fromUtf8("BusListView"));
        BusListView->setMinimumSize(QSize(120, 120));
        BusListView->setRootIsDecorated(false);
        BusListView->setUniformRowHeights(true);
        BusListView->setAllColumnsShowFocus(true);
        BusSplitter->addWidget(BusListView);
        BusLayout = new QWidget(BusSplitter);
        BusLayout->setObjectName(QString::fromUtf8("BusLayout"));
        vboxLayout1 = new QVBoxLayout(BusLayout);
        vboxLayout1->setSpacing(4);
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        BusTitleTextLabel = new QLabel(BusLayout);
        BusTitleTextLabel->setObjectName(QString::fromUtf8("BusTitleTextLabel"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        BusTitleTextLabel->setFont(font);
        BusTitleTextLabel->setMargin(2);
        BusTitleTextLabel->setIndent(6);

        vboxLayout1->addWidget(BusTitleTextLabel);

        BusTabWidget = new QTabWidget(BusLayout);
        BusTabWidget->setObjectName(QString::fromUtf8("BusTabWidget"));
        PropertiesTab = new QWidget();
        PropertiesTab->setObjectName(QString::fromUtf8("PropertiesTab"));
        gridLayout = new QGridLayout(PropertiesTab);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(8, 8, 8, 8);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        CommonBusGroup = new QGroupBox(PropertiesTab);
        CommonBusGroup->setObjectName(QString::fromUtf8("CommonBusGroup"));
        gridLayout1 = new QGridLayout(CommonBusGroup);
        gridLayout1->setSpacing(4);
        gridLayout1->setContentsMargins(8, 8, 8, 8);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        BusNameTextLabel = new QLabel(CommonBusGroup);
        BusNameTextLabel->setObjectName(QString::fromUtf8("BusNameTextLabel"));

        gridLayout1->addWidget(BusNameTextLabel, 0, 0, 1, 1);

        BusNameLineEdit = new QLineEdit(CommonBusGroup);
        BusNameLineEdit->setObjectName(QString::fromUtf8("BusNameLineEdit"));

        gridLayout1->addWidget(BusNameLineEdit, 0, 1, 1, 2);

        BusModeTextLabel = new QLabel(CommonBusGroup);
        BusModeTextLabel->setObjectName(QString::fromUtf8("BusModeTextLabel"));

        gridLayout1->addWidget(BusModeTextLabel, 1, 0, 1, 1);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem, 1, 2, 1, 1);

        BusModeComboBox = new QComboBox(CommonBusGroup);
        BusModeComboBox->addItem(QString());
        BusModeComboBox->addItem(QString());
        BusModeComboBox->addItem(QString());
        BusModeComboBox->setObjectName(QString::fromUtf8("BusModeComboBox"));

        gridLayout1->addWidget(BusModeComboBox, 1, 1, 1, 1);

        MonitorCheckBox = new QCheckBox(CommonBusGroup);
        MonitorCheckBox->setObjectName(QString::fromUtf8("MonitorCheckBox"));

        gridLayout1->addWidget(MonitorCheckBox, 2, 0, 1, 3);


        gridLayout->addWidget(CommonBusGroup, 0, 0, 1, 2);

        AudioBusGroup = new QGroupBox(PropertiesTab);
        AudioBusGroup->setObjectName(QString::fromUtf8("AudioBusGroup"));
        gridLayout2 = new QGridLayout(AudioBusGroup);
        gridLayout2->setSpacing(4);
        gridLayout2->setContentsMargins(8, 8, 8, 8);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        AudioChannelsTextLabel = new QLabel(AudioBusGroup);
        AudioChannelsTextLabel->setObjectName(QString::fromUtf8("AudioChannelsTextLabel"));

        gridLayout2->addWidget(AudioChannelsTextLabel, 0, 0, 1, 1);

        AudioChannelsSpinBox = new QSpinBox(AudioBusGroup);
        AudioChannelsSpinBox->setObjectName(QString::fromUtf8("AudioChannelsSpinBox"));
        AudioChannelsSpinBox->setMinimum(1);
        AudioChannelsSpinBox->setValue(2);

        gridLayout2->addWidget(AudioChannelsSpinBox, 0, 1, 1, 1);

        spacerItem1 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem1, 0, 2, 1, 1);

        AudioAutoConnectCheckBox = new QCheckBox(AudioBusGroup);
        AudioAutoConnectCheckBox->setObjectName(QString::fromUtf8("AudioAutoConnectCheckBox"));

        gridLayout2->addWidget(AudioAutoConnectCheckBox, 1, 0, 1, 3);


        gridLayout->addWidget(AudioBusGroup, 1, 0, 1, 1);

        MidiBusGroup = new QGroupBox(PropertiesTab);
        MidiBusGroup->setObjectName(QString::fromUtf8("MidiBusGroup"));
        gridLayout3 = new QGridLayout(MidiBusGroup);
        gridLayout3->setSpacing(4);
        gridLayout3->setContentsMargins(8, 8, 8, 8);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        MidiInstrumentComboBox = new QComboBox(MidiBusGroup);
        MidiInstrumentComboBox->setObjectName(QString::fromUtf8("MidiInstrumentComboBox"));

        gridLayout3->addWidget(MidiInstrumentComboBox, 0, 0, 1, 3);

        MidiSysexPushButton = new QPushButton(MidiBusGroup);
        MidiSysexPushButton->setObjectName(QString::fromUtf8("MidiSysexPushButton"));

        gridLayout3->addWidget(MidiSysexPushButton, 1, 0, 1, 1);

        MidiSysexTextLabel = new QLabel(MidiBusGroup);
        MidiSysexTextLabel->setObjectName(QString::fromUtf8("MidiSysexTextLabel"));
        MidiSysexTextLabel->setAlignment(Qt::AlignCenter);

        gridLayout3->addWidget(MidiSysexTextLabel, 1, 1, 1, 1);

        spacerItem2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout3->addItem(spacerItem2, 1, 2, 1, 1);


        gridLayout->addWidget(MidiBusGroup, 1, 1, 1, 1);

        BusTabWidget->addTab(PropertiesTab, QString());
        InputPluginsTab = new QWidget();
        InputPluginsTab->setObjectName(QString::fromUtf8("InputPluginsTab"));
        hboxLayout = new QHBoxLayout(InputPluginsTab);
        hboxLayout->setSpacing(4);
        hboxLayout->setContentsMargins(8, 8, 8, 8);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        InputPluginListView = new qtractorPluginListView(InputPluginsTab);
        InputPluginListView->setObjectName(QString::fromUtf8("InputPluginListView"));
        InputPluginListView->setFocusPolicy(Qt::WheelFocus);

        hboxLayout->addWidget(InputPluginListView);

        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setSpacing(4);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        AddInputPluginToolButton = new QToolButton(InputPluginsTab);
        AddInputPluginToolButton->setObjectName(QString::fromUtf8("AddInputPluginToolButton"));
        AddInputPluginToolButton->setMinimumSize(QSize(90, 28));
        const QIcon icon1 = QIcon(QString::fromUtf8(":/images/formCreate.png"));
        AddInputPluginToolButton->setIcon(icon1);
        AddInputPluginToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        vboxLayout2->addWidget(AddInputPluginToolButton);

        RemoveInputPluginToolButton = new QToolButton(InputPluginsTab);
        RemoveInputPluginToolButton->setObjectName(QString::fromUtf8("RemoveInputPluginToolButton"));
        RemoveInputPluginToolButton->setMinimumSize(QSize(90, 28));
        const QIcon icon2 = QIcon(QString::fromUtf8(":/images/formRemove.png"));
        RemoveInputPluginToolButton->setIcon(icon2);
        RemoveInputPluginToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        vboxLayout2->addWidget(RemoveInputPluginToolButton);

        spacerItem3 = new QSpacerItem(8, 8, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout2->addItem(spacerItem3);

        MoveUpInputPluginToolButton = new QToolButton(InputPluginsTab);
        MoveUpInputPluginToolButton->setObjectName(QString::fromUtf8("MoveUpInputPluginToolButton"));
        MoveUpInputPluginToolButton->setMinimumSize(QSize(90, 28));
        const QIcon icon3 = QIcon(QString::fromUtf8(":/images/formMoveUp.png"));
        MoveUpInputPluginToolButton->setIcon(icon3);
        MoveUpInputPluginToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        vboxLayout2->addWidget(MoveUpInputPluginToolButton);

        MoveDownInputPluginToolButton = new QToolButton(InputPluginsTab);
        MoveDownInputPluginToolButton->setObjectName(QString::fromUtf8("MoveDownInputPluginToolButton"));
        MoveDownInputPluginToolButton->setMinimumSize(QSize(90, 28));
        const QIcon icon4 = QIcon(QString::fromUtf8(":/images/formMoveDown.png"));
        MoveDownInputPluginToolButton->setIcon(icon4);
        MoveDownInputPluginToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        vboxLayout2->addWidget(MoveDownInputPluginToolButton);


        hboxLayout->addLayout(vboxLayout2);

        BusTabWidget->addTab(InputPluginsTab, QString());
        OutputPluginsTab = new QWidget();
        OutputPluginsTab->setObjectName(QString::fromUtf8("OutputPluginsTab"));
        hboxLayout1 = new QHBoxLayout(OutputPluginsTab);
        hboxLayout1->setSpacing(4);
        hboxLayout1->setContentsMargins(8, 8, 8, 8);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        OutputPluginListView = new qtractorPluginListView(OutputPluginsTab);
        OutputPluginListView->setObjectName(QString::fromUtf8("OutputPluginListView"));
        OutputPluginListView->setFocusPolicy(Qt::WheelFocus);

        hboxLayout1->addWidget(OutputPluginListView);

        vboxLayout3 = new QVBoxLayout();
        vboxLayout3->setSpacing(4);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        AddOutputPluginToolButton = new QToolButton(OutputPluginsTab);
        AddOutputPluginToolButton->setObjectName(QString::fromUtf8("AddOutputPluginToolButton"));
        AddOutputPluginToolButton->setMinimumSize(QSize(90, 28));
        AddOutputPluginToolButton->setIcon(icon1);
        AddOutputPluginToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        vboxLayout3->addWidget(AddOutputPluginToolButton);

        RemoveOutputPluginToolButton = new QToolButton(OutputPluginsTab);
        RemoveOutputPluginToolButton->setObjectName(QString::fromUtf8("RemoveOutputPluginToolButton"));
        RemoveOutputPluginToolButton->setMinimumSize(QSize(90, 28));
        RemoveOutputPluginToolButton->setIcon(icon2);
        RemoveOutputPluginToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        vboxLayout3->addWidget(RemoveOutputPluginToolButton);

        spacerItem4 = new QSpacerItem(8, 8, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout3->addItem(spacerItem4);

        MoveUpOutputPluginToolButton = new QToolButton(OutputPluginsTab);
        MoveUpOutputPluginToolButton->setObjectName(QString::fromUtf8("MoveUpOutputPluginToolButton"));
        MoveUpOutputPluginToolButton->setMinimumSize(QSize(90, 28));
        MoveUpOutputPluginToolButton->setIcon(icon3);
        MoveUpOutputPluginToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        vboxLayout3->addWidget(MoveUpOutputPluginToolButton);

        MoveDownOutputPluginToolButton = new QToolButton(OutputPluginsTab);
        MoveDownOutputPluginToolButton->setObjectName(QString::fromUtf8("MoveDownOutputPluginToolButton"));
        MoveDownOutputPluginToolButton->setMinimumSize(QSize(90, 28));
        MoveDownOutputPluginToolButton->setIcon(icon4);
        MoveDownOutputPluginToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        vboxLayout3->addWidget(MoveDownOutputPluginToolButton);


        hboxLayout1->addLayout(vboxLayout3);

        BusTabWidget->addTab(OutputPluginsTab, QString());

        vboxLayout1->addWidget(BusTabWidget);

        BusSplitter->addWidget(BusLayout);

        vboxLayout->addWidget(BusSplitter);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(4);
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        MoveUpPushButton = new QPushButton(qtractorBusForm);
        MoveUpPushButton->setObjectName(QString::fromUtf8("MoveUpPushButton"));
        MoveUpPushButton->setIcon(icon3);

        hboxLayout2->addWidget(MoveUpPushButton);

        MoveDownPushButton = new QPushButton(qtractorBusForm);
        MoveDownPushButton->setObjectName(QString::fromUtf8("MoveDownPushButton"));
        MoveDownPushButton->setIcon(icon4);

        hboxLayout2->addWidget(MoveDownPushButton);

        spacerItem5 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem5);

        CreatePushButton = new QPushButton(qtractorBusForm);
        CreatePushButton->setObjectName(QString::fromUtf8("CreatePushButton"));
        CreatePushButton->setIcon(icon1);

        hboxLayout2->addWidget(CreatePushButton);

        UpdatePushButton = new QPushButton(qtractorBusForm);
        UpdatePushButton->setObjectName(QString::fromUtf8("UpdatePushButton"));
        const QIcon icon5 = QIcon(QString::fromUtf8(":/images/formAccept.png"));
        UpdatePushButton->setIcon(icon5);

        hboxLayout2->addWidget(UpdatePushButton);

        DeletePushButton = new QPushButton(qtractorBusForm);
        DeletePushButton->setObjectName(QString::fromUtf8("DeletePushButton"));
        DeletePushButton->setIcon(icon2);

        hboxLayout2->addWidget(DeletePushButton);

        ClosePushButton = new QPushButton(qtractorBusForm);
        ClosePushButton->setObjectName(QString::fromUtf8("ClosePushButton"));

        hboxLayout2->addWidget(ClosePushButton);


        vboxLayout->addLayout(hboxLayout2);

#if QT_CONFIG(shortcut)
        BusNameTextLabel->setBuddy(BusNameLineEdit);
        BusModeTextLabel->setBuddy(BusModeComboBox);
        AudioChannelsTextLabel->setBuddy(AudioChannelsSpinBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(BusListView, BusTabWidget);
        QWidget::setTabOrder(BusTabWidget, BusNameLineEdit);
        QWidget::setTabOrder(BusNameLineEdit, BusModeComboBox);
        QWidget::setTabOrder(BusModeComboBox, MonitorCheckBox);
        QWidget::setTabOrder(MonitorCheckBox, AudioChannelsSpinBox);
        QWidget::setTabOrder(AudioChannelsSpinBox, AudioAutoConnectCheckBox);
        QWidget::setTabOrder(AudioAutoConnectCheckBox, InputPluginListView);
        QWidget::setTabOrder(InputPluginListView, AddInputPluginToolButton);
        QWidget::setTabOrder(AddInputPluginToolButton, RemoveInputPluginToolButton);
        QWidget::setTabOrder(RemoveInputPluginToolButton, MoveUpInputPluginToolButton);
        QWidget::setTabOrder(MoveUpInputPluginToolButton, MoveDownInputPluginToolButton);
        QWidget::setTabOrder(MoveDownInputPluginToolButton, OutputPluginListView);
        QWidget::setTabOrder(OutputPluginListView, AddOutputPluginToolButton);
        QWidget::setTabOrder(AddOutputPluginToolButton, RemoveOutputPluginToolButton);
        QWidget::setTabOrder(RemoveOutputPluginToolButton, MoveUpOutputPluginToolButton);
        QWidget::setTabOrder(MoveUpOutputPluginToolButton, MoveDownOutputPluginToolButton);
        QWidget::setTabOrder(MoveDownOutputPluginToolButton, MoveUpPushButton);
        QWidget::setTabOrder(MoveUpPushButton, MoveDownPushButton);
        QWidget::setTabOrder(MoveDownPushButton, CreatePushButton);
        QWidget::setTabOrder(CreatePushButton, UpdatePushButton);
        QWidget::setTabOrder(UpdatePushButton, DeletePushButton);
        QWidget::setTabOrder(DeletePushButton, ClosePushButton);

        retranslateUi(qtractorBusForm);

        BusTabWidget->setCurrentIndex(0);
        BusModeComboBox->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(qtractorBusForm);
    } // setupUi

    void retranslateUi(QDialog *qtractorBusForm)
    {
        qtractorBusForm->setWindowTitle(QCoreApplication::translate("qtractorBusForm", "Buses", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = BusListView->headerItem();
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("qtractorBusForm", "Mode", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("qtractorBusForm", "Ch", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("qtractorBusForm", "Buses", nullptr));
#if QT_CONFIG(tooltip)
        BusListView->setToolTip(QCoreApplication::translate("qtractorBusForm", "Bus list", nullptr));
#endif // QT_CONFIG(tooltip)
        BusTitleTextLabel->setText(QCoreApplication::translate("qtractorBusForm", "Bus", nullptr));
        CommonBusGroup->setTitle(QCoreApplication::translate("qtractorBusForm", "Bus", nullptr));
        BusNameTextLabel->setText(QCoreApplication::translate("qtractorBusForm", "&Name:", nullptr));
#if QT_CONFIG(tooltip)
        BusNameLineEdit->setToolTip(QCoreApplication::translate("qtractorBusForm", "Bus name", nullptr));
#endif // QT_CONFIG(tooltip)
        BusModeTextLabel->setText(QCoreApplication::translate("qtractorBusForm", "&Mode:", nullptr));
        BusModeComboBox->setItemText(0, QCoreApplication::translate("qtractorBusForm", "Input", nullptr));
        BusModeComboBox->setItemText(1, QCoreApplication::translate("qtractorBusForm", "Output", nullptr));
        BusModeComboBox->setItemText(2, QCoreApplication::translate("qtractorBusForm", "Duplex", nullptr));

#if QT_CONFIG(tooltip)
        BusModeComboBox->setToolTip(QCoreApplication::translate("qtractorBusForm", "Bus mode", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        MonitorCheckBox->setToolTip(QCoreApplication::translate("qtractorBusForm", "Bus monitor (pass-through)", nullptr));
#endif // QT_CONFIG(tooltip)
        MonitorCheckBox->setText(QCoreApplication::translate("qtractorBusForm", "M&onitor (pass-through)", nullptr));
        AudioBusGroup->setTitle(QCoreApplication::translate("qtractorBusForm", "Audio", nullptr));
        AudioChannelsTextLabel->setText(QCoreApplication::translate("qtractorBusForm", "Cha&nnels:", nullptr));
#if QT_CONFIG(tooltip)
        AudioChannelsSpinBox->setToolTip(QCoreApplication::translate("qtractorBusForm", "Audio channels", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        AudioAutoConnectCheckBox->setToolTip(QCoreApplication::translate("qtractorBusForm", "Audio auto-connect", nullptr));
#endif // QT_CONFIG(tooltip)
        AudioAutoConnectCheckBox->setText(QCoreApplication::translate("qtractorBusForm", "&Auto connect", nullptr));
        MidiBusGroup->setTitle(QCoreApplication::translate("qtractorBusForm", "MIDI", nullptr));
#if QT_CONFIG(tooltip)
        MidiInstrumentComboBox->setToolTip(QCoreApplication::translate("qtractorBusForm", "MIDI Instrument name", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        MidiSysexPushButton->setToolTip(QCoreApplication::translate("qtractorBusForm", "MIDI SysEx setup", nullptr));
#endif // QT_CONFIG(tooltip)
        MidiSysexPushButton->setText(QCoreApplication::translate("qtractorBusForm", "SysE&x...", nullptr));
        MidiSysexTextLabel->setText(QString());
        BusTabWidget->setTabText(BusTabWidget->indexOf(PropertiesTab), QCoreApplication::translate("qtractorBusForm", "Properties", nullptr));
#if QT_CONFIG(tooltip)
        InputPluginListView->setToolTip(QCoreApplication::translate("qtractorBusForm", "Input bus plugins", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        AddInputPluginToolButton->setToolTip(QCoreApplication::translate("qtractorBusForm", "Add input plugin", nullptr));
#endif // QT_CONFIG(tooltip)
        AddInputPluginToolButton->setText(QCoreApplication::translate("qtractorBusForm", "&Add...", nullptr));
#if QT_CONFIG(tooltip)
        RemoveInputPluginToolButton->setToolTip(QCoreApplication::translate("qtractorBusForm", "Remove input plugin", nullptr));
#endif // QT_CONFIG(tooltip)
        RemoveInputPluginToolButton->setText(QCoreApplication::translate("qtractorBusForm", "&Remove", nullptr));
#if QT_CONFIG(tooltip)
        MoveUpInputPluginToolButton->setToolTip(QCoreApplication::translate("qtractorBusForm", "Move input plugin up", nullptr));
#endif // QT_CONFIG(tooltip)
        MoveUpInputPluginToolButton->setText(QCoreApplication::translate("qtractorBusForm", "&Up", nullptr));
#if QT_CONFIG(tooltip)
        MoveDownInputPluginToolButton->setToolTip(QCoreApplication::translate("qtractorBusForm", "Move input plugin down", nullptr));
#endif // QT_CONFIG(tooltip)
        MoveDownInputPluginToolButton->setText(QCoreApplication::translate("qtractorBusForm", "&Down", nullptr));
        BusTabWidget->setTabText(BusTabWidget->indexOf(InputPluginsTab), QCoreApplication::translate("qtractorBusForm", "Input Plugins", nullptr));
#if QT_CONFIG(tooltip)
        OutputPluginListView->setToolTip(QCoreApplication::translate("qtractorBusForm", "Output bus plugins", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        AddOutputPluginToolButton->setToolTip(QCoreApplication::translate("qtractorBusForm", "Add output plugin", nullptr));
#endif // QT_CONFIG(tooltip)
        AddOutputPluginToolButton->setText(QCoreApplication::translate("qtractorBusForm", "&Add...", nullptr));
#if QT_CONFIG(tooltip)
        RemoveOutputPluginToolButton->setToolTip(QCoreApplication::translate("qtractorBusForm", "Remove output plugin", nullptr));
#endif // QT_CONFIG(tooltip)
        RemoveOutputPluginToolButton->setText(QCoreApplication::translate("qtractorBusForm", "&Remove", nullptr));
#if QT_CONFIG(tooltip)
        MoveUpOutputPluginToolButton->setToolTip(QCoreApplication::translate("qtractorBusForm", "Move output plugin up", nullptr));
#endif // QT_CONFIG(tooltip)
        MoveUpOutputPluginToolButton->setText(QCoreApplication::translate("qtractorBusForm", "&Up", nullptr));
#if QT_CONFIG(tooltip)
        MoveDownOutputPluginToolButton->setToolTip(QCoreApplication::translate("qtractorBusForm", "Move output plugin down", nullptr));
#endif // QT_CONFIG(tooltip)
        MoveDownOutputPluginToolButton->setText(QCoreApplication::translate("qtractorBusForm", "&Down", nullptr));
        BusTabWidget->setTabText(BusTabWidget->indexOf(OutputPluginsTab), QCoreApplication::translate("qtractorBusForm", "Output Plugins", nullptr));
#if QT_CONFIG(tooltip)
        MoveUpPushButton->setToolTip(QCoreApplication::translate("qtractorBusForm", "Move bus up towards the top", nullptr));
#endif // QT_CONFIG(tooltip)
        MoveUpPushButton->setText(QCoreApplication::translate("qtractorBusForm", "U&p", nullptr));
#if QT_CONFIG(tooltip)
        MoveDownPushButton->setToolTip(QCoreApplication::translate("qtractorBusForm", "Move bus down towards the bottom", nullptr));
#endif // QT_CONFIG(tooltip)
        MoveDownPushButton->setText(QCoreApplication::translate("qtractorBusForm", "Do&wn", nullptr));
#if QT_CONFIG(tooltip)
        CreatePushButton->setToolTip(QCoreApplication::translate("qtractorBusForm", "Create bus", nullptr));
#endif // QT_CONFIG(tooltip)
        CreatePushButton->setText(QCoreApplication::translate("qtractorBusForm", "&Create", nullptr));
#if QT_CONFIG(tooltip)
        UpdatePushButton->setToolTip(QCoreApplication::translate("qtractorBusForm", "Update bus", nullptr));
#endif // QT_CONFIG(tooltip)
        UpdatePushButton->setText(QCoreApplication::translate("qtractorBusForm", "&Update", nullptr));
#if QT_CONFIG(tooltip)
        DeletePushButton->setToolTip(QCoreApplication::translate("qtractorBusForm", "Delete bus", nullptr));
#endif // QT_CONFIG(tooltip)
        DeletePushButton->setText(QCoreApplication::translate("qtractorBusForm", "&Delete", nullptr));
#if QT_CONFIG(tooltip)
        ClosePushButton->setToolTip(QCoreApplication::translate("qtractorBusForm", "Close this dialog", nullptr));
#endif // QT_CONFIG(tooltip)
        ClosePushButton->setText(QCoreApplication::translate("qtractorBusForm", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qtractorBusForm: public Ui_qtractorBusForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTRACTORBUSFORM_H
