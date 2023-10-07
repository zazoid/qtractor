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
** Form generated from reading UI file 'qtractorConnectForm.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTRACTORCONNECTFORM_H
#define UI_QTRACTORCONNECTFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qtractorAudioConnect.h"
#include "qtractorConnect.h"
#include "qtractorMidiConnect.h"

QT_BEGIN_NAMESPACE

class Ui_qtractorConnectForm
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *ConnectTabWidget;
    QWidget *AudioConnectTab;
    QVBoxLayout *vboxLayout1;
    QSplitter *AudioConnectSplitter;
    QWidget *AudioOLayout;
    QVBoxLayout *vboxLayout2;
    QComboBox *AudioOClientsComboBox;
    qtractorAudioClientListView *AudioOListView;
    qtractorConnectorView *AudioConnectorView;
    QWidget *AudioILayout;
    QVBoxLayout *vboxLayout3;
    QComboBox *AudioIClientsComboBox;
    qtractorAudioClientListView *AudioIListView;
    QHBoxLayout *hboxLayout;
    QPushButton *AudioConnectPushButton;
    QPushButton *AudioDisconnectPushButton;
    QPushButton *AudioDisconnectAllPushButton;
    QSpacerItem *spacerItem;
    QPushButton *AudioRefreshPushButton;
    QWidget *MidiConnectTab;
    QVBoxLayout *vboxLayout4;
    QSplitter *MidiConnectSplitter;
    QWidget *MidiOLayout;
    QVBoxLayout *vboxLayout5;
    QComboBox *MidiOClientsComboBox;
    qtractorMidiClientListView *MidiOListView;
    qtractorConnectorView *MidiConnectorView;
    QWidget *MidiILayout;
    QVBoxLayout *vboxLayout6;
    QComboBox *MidiIClientsComboBox;
    qtractorMidiClientListView *MidiIListView;
    QHBoxLayout *hboxLayout1;
    QPushButton *MidiConnectPushButton;
    QPushButton *MidiDisconnectPushButton;
    QPushButton *MidiDisconnectAllPushButton;
    QSpacerItem *spacerItem1;
    QPushButton *MidiRefreshPushButton;

    void setupUi(QWidget *qtractorConnectForm)
    {
        if (qtractorConnectForm->objectName().isEmpty())
            qtractorConnectForm->setObjectName(QString::fromUtf8("qtractorConnectForm"));
        qtractorConnectForm->resize(480, 240);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qtractorConnectForm->sizePolicy().hasHeightForWidth());
        qtractorConnectForm->setSizePolicy(sizePolicy);
        const QIcon icon = QIcon(QString::fromUtf8(":/images/viewConnections.png"));
        qtractorConnectForm->setWindowIcon(icon);
        vboxLayout = new QVBoxLayout(qtractorConnectForm);
        vboxLayout->setSpacing(4);
        vboxLayout->setContentsMargins(4, 4, 4, 4);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        ConnectTabWidget = new QTabWidget(qtractorConnectForm);
        ConnectTabWidget->setObjectName(QString::fromUtf8("ConnectTabWidget"));
        AudioConnectTab = new QWidget();
        AudioConnectTab->setObjectName(QString::fromUtf8("AudioConnectTab"));
        vboxLayout1 = new QVBoxLayout(AudioConnectTab);
        vboxLayout1->setSpacing(4);
        vboxLayout1->setContentsMargins(8, 8, 8, 8);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        AudioConnectSplitter = new QSplitter(AudioConnectTab);
        AudioConnectSplitter->setObjectName(QString::fromUtf8("AudioConnectSplitter"));
        AudioConnectSplitter->setOrientation(Qt::Horizontal);
        AudioConnectSplitter->setHandleWidth(2);
        AudioOLayout = new QWidget(AudioConnectSplitter);
        AudioOLayout->setObjectName(QString::fromUtf8("AudioOLayout"));
        vboxLayout2 = new QVBoxLayout(AudioOLayout);
        vboxLayout2->setSpacing(4);
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        AudioOClientsComboBox = new QComboBox(AudioOLayout);
        AudioOClientsComboBox->setObjectName(QString::fromUtf8("AudioOClientsComboBox"));

        vboxLayout2->addWidget(AudioOClientsComboBox);

        AudioOListView = new qtractorAudioClientListView(AudioOLayout);
        AudioOListView->setObjectName(QString::fromUtf8("AudioOListView"));
        AudioOListView->setFocusPolicy(Qt::WheelFocus);

        vboxLayout2->addWidget(AudioOListView);

        AudioConnectSplitter->addWidget(AudioOLayout);
        AudioConnectorView = new qtractorConnectorView(AudioConnectSplitter);
        AudioConnectorView->setObjectName(QString::fromUtf8("AudioConnectorView"));
        AudioConnectSplitter->addWidget(AudioConnectorView);
        AudioILayout = new QWidget(AudioConnectSplitter);
        AudioILayout->setObjectName(QString::fromUtf8("AudioILayout"));
        vboxLayout3 = new QVBoxLayout(AudioILayout);
        vboxLayout3->setSpacing(4);
        vboxLayout3->setContentsMargins(0, 0, 0, 0);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        vboxLayout3->setContentsMargins(0, 0, 0, 0);
        AudioIClientsComboBox = new QComboBox(AudioILayout);
        AudioIClientsComboBox->setObjectName(QString::fromUtf8("AudioIClientsComboBox"));

        vboxLayout3->addWidget(AudioIClientsComboBox);

        AudioIListView = new qtractorAudioClientListView(AudioILayout);
        AudioIListView->setObjectName(QString::fromUtf8("AudioIListView"));
        AudioIListView->setFocusPolicy(Qt::WheelFocus);

        vboxLayout3->addWidget(AudioIListView);

        AudioConnectSplitter->addWidget(AudioILayout);

        vboxLayout1->addWidget(AudioConnectSplitter);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(4);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        AudioConnectPushButton = new QPushButton(AudioConnectTab);
        AudioConnectPushButton->setObjectName(QString::fromUtf8("AudioConnectPushButton"));
        const QIcon icon1 = QIcon(QString::fromUtf8(":/images/formConnect.png"));
        AudioConnectPushButton->setIcon(icon1);

        hboxLayout->addWidget(AudioConnectPushButton);

        AudioDisconnectPushButton = new QPushButton(AudioConnectTab);
        AudioDisconnectPushButton->setObjectName(QString::fromUtf8("AudioDisconnectPushButton"));
        const QIcon icon2 = QIcon(QString::fromUtf8(":/images/formDisconnect.png"));
        AudioDisconnectPushButton->setIcon(icon2);

        hboxLayout->addWidget(AudioDisconnectPushButton);

        AudioDisconnectAllPushButton = new QPushButton(AudioConnectTab);
        AudioDisconnectAllPushButton->setObjectName(QString::fromUtf8("AudioDisconnectAllPushButton"));
        const QIcon icon3 = QIcon(QString::fromUtf8(":/images/formDisconnectAll.png"));
        AudioDisconnectAllPushButton->setIcon(icon3);

        hboxLayout->addWidget(AudioDisconnectAllPushButton);

        spacerItem = new QSpacerItem(87, 8, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        AudioRefreshPushButton = new QPushButton(AudioConnectTab);
        AudioRefreshPushButton->setObjectName(QString::fromUtf8("AudioRefreshPushButton"));
        const QIcon icon4 = QIcon(QString::fromUtf8(":/images/formRefresh.png"));
        AudioRefreshPushButton->setIcon(icon4);

        hboxLayout->addWidget(AudioRefreshPushButton);


        vboxLayout1->addLayout(hboxLayout);

        ConnectTabWidget->addTab(AudioConnectTab, QString());
        MidiConnectTab = new QWidget();
        MidiConnectTab->setObjectName(QString::fromUtf8("MidiConnectTab"));
        vboxLayout4 = new QVBoxLayout(MidiConnectTab);
        vboxLayout4->setSpacing(4);
        vboxLayout4->setContentsMargins(8, 8, 8, 8);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        MidiConnectSplitter = new QSplitter(MidiConnectTab);
        MidiConnectSplitter->setObjectName(QString::fromUtf8("MidiConnectSplitter"));
        MidiConnectSplitter->setOrientation(Qt::Horizontal);
        MidiConnectSplitter->setHandleWidth(2);
        MidiOLayout = new QWidget(MidiConnectSplitter);
        MidiOLayout->setObjectName(QString::fromUtf8("MidiOLayout"));
        vboxLayout5 = new QVBoxLayout(MidiOLayout);
        vboxLayout5->setSpacing(4);
        vboxLayout5->setContentsMargins(0, 0, 0, 0);
        vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
        vboxLayout5->setContentsMargins(0, 0, 0, 0);
        MidiOClientsComboBox = new QComboBox(MidiOLayout);
        MidiOClientsComboBox->setObjectName(QString::fromUtf8("MidiOClientsComboBox"));

        vboxLayout5->addWidget(MidiOClientsComboBox);

        MidiOListView = new qtractorMidiClientListView(MidiOLayout);
        MidiOListView->setObjectName(QString::fromUtf8("MidiOListView"));
        MidiOListView->setFocusPolicy(Qt::WheelFocus);

        vboxLayout5->addWidget(MidiOListView);

        MidiConnectSplitter->addWidget(MidiOLayout);
        MidiConnectorView = new qtractorConnectorView(MidiConnectSplitter);
        MidiConnectorView->setObjectName(QString::fromUtf8("MidiConnectorView"));
        MidiConnectSplitter->addWidget(MidiConnectorView);
        MidiILayout = new QWidget(MidiConnectSplitter);
        MidiILayout->setObjectName(QString::fromUtf8("MidiILayout"));
        vboxLayout6 = new QVBoxLayout(MidiILayout);
        vboxLayout6->setSpacing(4);
        vboxLayout6->setContentsMargins(0, 0, 0, 0);
        vboxLayout6->setObjectName(QString::fromUtf8("vboxLayout6"));
        vboxLayout6->setContentsMargins(0, 0, 0, 0);
        MidiIClientsComboBox = new QComboBox(MidiILayout);
        MidiIClientsComboBox->setObjectName(QString::fromUtf8("MidiIClientsComboBox"));

        vboxLayout6->addWidget(MidiIClientsComboBox);

        MidiIListView = new qtractorMidiClientListView(MidiILayout);
        MidiIListView->setObjectName(QString::fromUtf8("MidiIListView"));
        MidiIListView->setFocusPolicy(Qt::WheelFocus);

        vboxLayout6->addWidget(MidiIListView);

        MidiConnectSplitter->addWidget(MidiILayout);

        vboxLayout4->addWidget(MidiConnectSplitter);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(4);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        MidiConnectPushButton = new QPushButton(MidiConnectTab);
        MidiConnectPushButton->setObjectName(QString::fromUtf8("MidiConnectPushButton"));
        MidiConnectPushButton->setIcon(icon1);

        hboxLayout1->addWidget(MidiConnectPushButton);

        MidiDisconnectPushButton = new QPushButton(MidiConnectTab);
        MidiDisconnectPushButton->setObjectName(QString::fromUtf8("MidiDisconnectPushButton"));
        MidiDisconnectPushButton->setIcon(icon2);

        hboxLayout1->addWidget(MidiDisconnectPushButton);

        MidiDisconnectAllPushButton = new QPushButton(MidiConnectTab);
        MidiDisconnectAllPushButton->setObjectName(QString::fromUtf8("MidiDisconnectAllPushButton"));
        MidiDisconnectAllPushButton->setIcon(icon3);

        hboxLayout1->addWidget(MidiDisconnectAllPushButton);

        spacerItem1 = new QSpacerItem(87, 8, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        MidiRefreshPushButton = new QPushButton(MidiConnectTab);
        MidiRefreshPushButton->setObjectName(QString::fromUtf8("MidiRefreshPushButton"));
        MidiRefreshPushButton->setIcon(icon4);

        hboxLayout1->addWidget(MidiRefreshPushButton);


        vboxLayout4->addLayout(hboxLayout1);

        ConnectTabWidget->addTab(MidiConnectTab, QString());

        vboxLayout->addWidget(ConnectTabWidget);

        QWidget::setTabOrder(ConnectTabWidget, AudioOClientsComboBox);
        QWidget::setTabOrder(AudioOClientsComboBox, AudioOListView);
        QWidget::setTabOrder(AudioOListView, AudioIClientsComboBox);
        QWidget::setTabOrder(AudioIClientsComboBox, AudioIListView);
        QWidget::setTabOrder(AudioIListView, AudioConnectPushButton);
        QWidget::setTabOrder(AudioConnectPushButton, AudioDisconnectPushButton);
        QWidget::setTabOrder(AudioDisconnectPushButton, AudioDisconnectAllPushButton);
        QWidget::setTabOrder(AudioDisconnectAllPushButton, AudioRefreshPushButton);
        QWidget::setTabOrder(AudioRefreshPushButton, MidiOClientsComboBox);
        QWidget::setTabOrder(MidiOClientsComboBox, MidiOListView);
        QWidget::setTabOrder(MidiOListView, MidiIClientsComboBox);
        QWidget::setTabOrder(MidiIClientsComboBox, MidiIListView);
        QWidget::setTabOrder(MidiIListView, MidiConnectPushButton);
        QWidget::setTabOrder(MidiConnectPushButton, MidiDisconnectPushButton);
        QWidget::setTabOrder(MidiDisconnectPushButton, MidiDisconnectAllPushButton);
        QWidget::setTabOrder(MidiDisconnectAllPushButton, MidiRefreshPushButton);

        retranslateUi(qtractorConnectForm);

        QMetaObject::connectSlotsByName(qtractorConnectForm);
    } // setupUi

    void retranslateUi(QWidget *qtractorConnectForm)
    {
        qtractorConnectForm->setWindowTitle(QCoreApplication::translate("qtractorConnectForm", "Connections", nullptr));
#if QT_CONFIG(tooltip)
        AudioOClientsComboBox->setToolTip(QCoreApplication::translate("qtractorConnectForm", "Select output client/ports", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        AudioIClientsComboBox->setToolTip(QCoreApplication::translate("qtractorConnectForm", "Select input client/ports", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        AudioConnectPushButton->setToolTip(QCoreApplication::translate("qtractorConnectForm", "Connect currently selected ports", nullptr));
#endif // QT_CONFIG(tooltip)
        AudioConnectPushButton->setText(QCoreApplication::translate("qtractorConnectForm", "&Connect", nullptr));
#if QT_CONFIG(tooltip)
        AudioDisconnectPushButton->setToolTip(QCoreApplication::translate("qtractorConnectForm", "Disconnect currently selected ports", nullptr));
#endif // QT_CONFIG(tooltip)
        AudioDisconnectPushButton->setText(QCoreApplication::translate("qtractorConnectForm", "&Disconnect", nullptr));
#if QT_CONFIG(tooltip)
        AudioDisconnectAllPushButton->setToolTip(QCoreApplication::translate("qtractorConnectForm", "Disconnect all currently connected ports", nullptr));
#endif // QT_CONFIG(tooltip)
        AudioDisconnectAllPushButton->setText(QCoreApplication::translate("qtractorConnectForm", "Disconnect &All", nullptr));
#if QT_CONFIG(tooltip)
        AudioRefreshPushButton->setToolTip(QCoreApplication::translate("qtractorConnectForm", "Refresh current connections view", nullptr));
#endif // QT_CONFIG(tooltip)
        AudioRefreshPushButton->setText(QCoreApplication::translate("qtractorConnectForm", "&Refresh", nullptr));
        ConnectTabWidget->setTabText(ConnectTabWidget->indexOf(AudioConnectTab), QCoreApplication::translate("qtractorConnectForm", "Audio", nullptr));
#if QT_CONFIG(tooltip)
        MidiOClientsComboBox->setToolTip(QCoreApplication::translate("qtractorConnectForm", "Select output client/ports", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        MidiIClientsComboBox->setToolTip(QCoreApplication::translate("qtractorConnectForm", "Select input client/ports", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        MidiConnectPushButton->setToolTip(QCoreApplication::translate("qtractorConnectForm", "Connect currently selected ports", nullptr));
#endif // QT_CONFIG(tooltip)
        MidiConnectPushButton->setText(QCoreApplication::translate("qtractorConnectForm", "&Connect", nullptr));
#if QT_CONFIG(tooltip)
        MidiDisconnectPushButton->setToolTip(QCoreApplication::translate("qtractorConnectForm", "Disconnect currently selected ports", nullptr));
#endif // QT_CONFIG(tooltip)
        MidiDisconnectPushButton->setText(QCoreApplication::translate("qtractorConnectForm", "&Disconnect", nullptr));
#if QT_CONFIG(tooltip)
        MidiDisconnectAllPushButton->setToolTip(QCoreApplication::translate("qtractorConnectForm", "Disconnect all currently connected ports", nullptr));
#endif // QT_CONFIG(tooltip)
        MidiDisconnectAllPushButton->setText(QCoreApplication::translate("qtractorConnectForm", "Disconnect &All", nullptr));
#if QT_CONFIG(tooltip)
        MidiRefreshPushButton->setToolTip(QCoreApplication::translate("qtractorConnectForm", "Refresh current connections view", nullptr));
#endif // QT_CONFIG(tooltip)
        MidiRefreshPushButton->setText(QCoreApplication::translate("qtractorConnectForm", "&Refresh", nullptr));
        ConnectTabWidget->setTabText(ConnectTabWidget->indexOf(MidiConnectTab), QCoreApplication::translate("qtractorConnectForm", "MIDI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qtractorConnectForm: public Ui_qtractorConnectForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTRACTORCONNECTFORM_H
