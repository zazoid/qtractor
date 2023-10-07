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
** Form generated from reading UI file 'qtractorPluginForm.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTRACTORPLUGINFORM_H
#define UI_QTRACTORPLUGINFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qtractorPluginForm
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QToolButton *OpenPresetToolButton;
    QComboBox *PresetComboBox;
    QToolButton *SavePresetToolButton;
    QToolButton *DeletePresetToolButton;
    QSpacerItem *spacerItem;
    QToolButton *EditToolButton;
    QToolButton *ActivateToolButton;
    QTabWidget *TabWidget;
    QWidget *About;
    QGridLayout *gridLayout;
    QLabel *NameTextLabel;
    QLabel *TypeHintTextLabel;
    QLabel *AboutTextLabel;
    QLabel *LatencyTextLabel;
    QHBoxLayout *hboxLayout1;
    QToolButton *SendsToolButton;
    QToolButton *ReturnsToolButton;
    QLabel *AuxSendBusNameLabel;
    QComboBox *AuxSendBusNameComboBox;
    QToolButton *AuxSendBusNameToolButton;
    QSpacerItem *spacerItem1;
    QPushButton *DirectAccessParamPushButton;

    void setupUi(QWidget *qtractorPluginForm)
    {
        if (qtractorPluginForm->objectName().isEmpty())
            qtractorPluginForm->setObjectName(QString::fromUtf8("qtractorPluginForm"));
        qtractorPluginForm->resize(480, 240);
        const QIcon icon = QIcon(QString::fromUtf8(":/images/trackProperties.png"));
        qtractorPluginForm->setWindowIcon(icon);
        vboxLayout = new QVBoxLayout(qtractorPluginForm);
        vboxLayout->setSpacing(4);
        vboxLayout->setContentsMargins(4, 4, 4, 4);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        OpenPresetToolButton = new QToolButton(qtractorPluginForm);
        OpenPresetToolButton->setObjectName(QString::fromUtf8("OpenPresetToolButton"));
        OpenPresetToolButton->setFocusPolicy(Qt::TabFocus);
        const QIcon icon1 = QIcon(QString::fromUtf8(":/images/formOpen.png"));
        OpenPresetToolButton->setIcon(icon1);

        hboxLayout->addWidget(OpenPresetToolButton);

        PresetComboBox = new QComboBox(qtractorPluginForm);
        PresetComboBox->setObjectName(QString::fromUtf8("PresetComboBox"));
        PresetComboBox->setMinimumSize(QSize(160, 0));
        PresetComboBox->setEditable(true);

        hboxLayout->addWidget(PresetComboBox);

        SavePresetToolButton = new QToolButton(qtractorPluginForm);
        SavePresetToolButton->setObjectName(QString::fromUtf8("SavePresetToolButton"));
        SavePresetToolButton->setFocusPolicy(Qt::TabFocus);
        const QIcon icon2 = QIcon(QString::fromUtf8(":/images/formSave.png"));
        SavePresetToolButton->setIcon(icon2);

        hboxLayout->addWidget(SavePresetToolButton);

        DeletePresetToolButton = new QToolButton(qtractorPluginForm);
        DeletePresetToolButton->setObjectName(QString::fromUtf8("DeletePresetToolButton"));
        DeletePresetToolButton->setFocusPolicy(Qt::TabFocus);
        const QIcon icon3 = QIcon(QString::fromUtf8(":/images/formRemove.png"));
        DeletePresetToolButton->setIcon(icon3);

        hboxLayout->addWidget(DeletePresetToolButton);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        EditToolButton = new QToolButton(qtractorPluginForm);
        EditToolButton->setObjectName(QString::fromUtf8("EditToolButton"));
        EditToolButton->setFocusPolicy(Qt::TabFocus);
        const QIcon icon4 = QIcon(QString::fromUtf8(":/images/formEdit.png"));
        EditToolButton->setIcon(icon4);
        EditToolButton->setCheckable(true);
        EditToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        hboxLayout->addWidget(EditToolButton);

        ActivateToolButton = new QToolButton(qtractorPluginForm);
        ActivateToolButton->setObjectName(QString::fromUtf8("ActivateToolButton"));
        ActivateToolButton->setFocusPolicy(Qt::TabFocus);
        const QIcon icon5 = QIcon(QString::fromUtf8(":/images/itemLedOff.png"));
        ActivateToolButton->setIcon(icon5);
        ActivateToolButton->setCheckable(true);
        ActivateToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        hboxLayout->addWidget(ActivateToolButton);


        vboxLayout->addLayout(hboxLayout);

        TabWidget = new QTabWidget(qtractorPluginForm);
        TabWidget->setObjectName(QString::fromUtf8("TabWidget"));
        About = new QWidget();
        About->setObjectName(QString::fromUtf8("About"));
        gridLayout = new QGridLayout(About);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        NameTextLabel = new QLabel(About);
        NameTextLabel->setObjectName(QString::fromUtf8("NameTextLabel"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        NameTextLabel->setFont(font);
        NameTextLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(NameTextLabel, 0, 0, 1, 1);

        TypeHintTextLabel = new QLabel(About);
        TypeHintTextLabel->setObjectName(QString::fromUtf8("TypeHintTextLabel"));
        TypeHintTextLabel->setEnabled(false);
        TypeHintTextLabel->setFont(font);
        TypeHintTextLabel->setAlignment(Qt::AlignRight|Qt::AlignVCenter);

        gridLayout->addWidget(TypeHintTextLabel, 0, 1, 1, 1);

        AboutTextLabel = new QLabel(About);
        AboutTextLabel->setObjectName(QString::fromUtf8("AboutTextLabel"));
        AboutTextLabel->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AboutTextLabel->sizePolicy().hasHeightForWidth());
        AboutTextLabel->setSizePolicy(sizePolicy);
        AboutTextLabel->setMinimumSize(QSize(360, 60));
        AboutTextLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        AboutTextLabel->setWordWrap(true);

        gridLayout->addWidget(AboutTextLabel, 1, 0, 1, 2);

        LatencyTextLabel = new QLabel(About);
        LatencyTextLabel->setObjectName(QString::fromUtf8("LatencyTextLabel"));
        LatencyTextLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(LatencyTextLabel, 2, 0, 1, 2);

        TabWidget->addTab(About, QString());

        vboxLayout->addWidget(TabWidget);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        SendsToolButton = new QToolButton(qtractorPluginForm);
        SendsToolButton->setObjectName(QString::fromUtf8("SendsToolButton"));
        SendsToolButton->setFocusPolicy(Qt::TabFocus);
        SendsToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        hboxLayout1->addWidget(SendsToolButton);

        ReturnsToolButton = new QToolButton(qtractorPluginForm);
        ReturnsToolButton->setObjectName(QString::fromUtf8("ReturnsToolButton"));
        ReturnsToolButton->setFocusPolicy(Qt::TabFocus);
        ReturnsToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        hboxLayout1->addWidget(ReturnsToolButton);

        AuxSendBusNameLabel = new QLabel(qtractorPluginForm);
        AuxSendBusNameLabel->setObjectName(QString::fromUtf8("AuxSendBusNameLabel"));

        hboxLayout1->addWidget(AuxSendBusNameLabel);

        AuxSendBusNameComboBox = new QComboBox(qtractorPluginForm);
        AuxSendBusNameComboBox->setObjectName(QString::fromUtf8("AuxSendBusNameComboBox"));

        hboxLayout1->addWidget(AuxSendBusNameComboBox);

        AuxSendBusNameToolButton = new QToolButton(qtractorPluginForm);
        AuxSendBusNameToolButton->setObjectName(QString::fromUtf8("AuxSendBusNameToolButton"));
        AuxSendBusNameToolButton->setMinimumSize(QSize(22, 22));
        AuxSendBusNameToolButton->setMaximumSize(QSize(24, 24));
        AuxSendBusNameToolButton->setFocusPolicy(Qt::TabFocus);

        hboxLayout1->addWidget(AuxSendBusNameToolButton);

        spacerItem1 = new QSpacerItem(20, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        DirectAccessParamPushButton = new QPushButton(qtractorPluginForm);
        DirectAccessParamPushButton->setObjectName(QString::fromUtf8("DirectAccessParamPushButton"));
        DirectAccessParamPushButton->setMinimumSize(QSize(80, 22));
        DirectAccessParamPushButton->setMaximumSize(QSize(120, 24));
        DirectAccessParamPushButton->setFocusPolicy(Qt::TabFocus);

        hboxLayout1->addWidget(DirectAccessParamPushButton);


        vboxLayout->addLayout(hboxLayout1);

        QWidget::setTabOrder(PresetComboBox, OpenPresetToolButton);
        QWidget::setTabOrder(OpenPresetToolButton, SavePresetToolButton);
        QWidget::setTabOrder(SavePresetToolButton, DeletePresetToolButton);
        QWidget::setTabOrder(DeletePresetToolButton, EditToolButton);
        QWidget::setTabOrder(EditToolButton, ActivateToolButton);
        QWidget::setTabOrder(ActivateToolButton, SendsToolButton);
        QWidget::setTabOrder(SendsToolButton, ReturnsToolButton);
        QWidget::setTabOrder(ReturnsToolButton, AuxSendBusNameComboBox);
        QWidget::setTabOrder(AuxSendBusNameComboBox, AuxSendBusNameToolButton);
        QWidget::setTabOrder(AuxSendBusNameToolButton, DirectAccessParamPushButton);

        retranslateUi(qtractorPluginForm);

        QMetaObject::connectSlotsByName(qtractorPluginForm);
    } // setupUi

    void retranslateUi(QWidget *qtractorPluginForm)
    {
        qtractorPluginForm->setWindowTitle(QCoreApplication::translate("qtractorPluginForm", "Plugin Properties", nullptr));
#if QT_CONFIG(tooltip)
        OpenPresetToolButton->setToolTip(QCoreApplication::translate("qtractorPluginForm", "Open preset", nullptr));
#endif // QT_CONFIG(tooltip)
        OpenPresetToolButton->setText(QString());
#if QT_CONFIG(tooltip)
        PresetComboBox->setToolTip(QCoreApplication::translate("qtractorPluginForm", "Preset name", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        SavePresetToolButton->setToolTip(QCoreApplication::translate("qtractorPluginForm", "Save preset", nullptr));
#endif // QT_CONFIG(tooltip)
        SavePresetToolButton->setText(QString());
#if QT_CONFIG(tooltip)
        DeletePresetToolButton->setToolTip(QCoreApplication::translate("qtractorPluginForm", "Delete preset", nullptr));
#endif // QT_CONFIG(tooltip)
        DeletePresetToolButton->setText(QString());
#if QT_CONFIG(tooltip)
        EditToolButton->setToolTip(QCoreApplication::translate("qtractorPluginForm", "Edit plugin", nullptr));
#endif // QT_CONFIG(tooltip)
        EditToolButton->setText(QCoreApplication::translate("qtractorPluginForm", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        ActivateToolButton->setToolTip(QCoreApplication::translate("qtractorPluginForm", "Activate plugin", nullptr));
#endif // QT_CONFIG(tooltip)
        ActivateToolButton->setText(QCoreApplication::translate("qtractorPluginForm", "Active", nullptr));
        TabWidget->setTabText(TabWidget->indexOf(About), QCoreApplication::translate("qtractorPluginForm", "About", nullptr));
#if QT_CONFIG(tooltip)
        SendsToolButton->setToolTip(QCoreApplication::translate("qtractorPluginForm", "Outputs (Sends)", nullptr));
#endif // QT_CONFIG(tooltip)
        SendsToolButton->setText(QCoreApplication::translate("qtractorPluginForm", "Sends", nullptr));
#if QT_CONFIG(tooltip)
        ReturnsToolButton->setToolTip(QCoreApplication::translate("qtractorPluginForm", "Inputs (Returns)", nullptr));
#endif // QT_CONFIG(tooltip)
        ReturnsToolButton->setText(QCoreApplication::translate("qtractorPluginForm", "Returns", nullptr));
        AuxSendBusNameLabel->setText(QCoreApplication::translate("qtractorPluginForm", "Aux Send Bus:", nullptr));
#if QT_CONFIG(tooltip)
        AuxSendBusNameToolButton->setToolTip(QCoreApplication::translate("qtractorPluginForm", "Manage buses", nullptr));
#endif // QT_CONFIG(tooltip)
        AuxSendBusNameToolButton->setText(QCoreApplication::translate("qtractorPluginForm", "...", nullptr));
#if QT_CONFIG(tooltip)
        DirectAccessParamPushButton->setToolTip(QCoreApplication::translate("qtractorPluginForm", "Direct Access Parameter", nullptr));
#endif // QT_CONFIG(tooltip)
        DirectAccessParamPushButton->setText(QCoreApplication::translate("qtractorPluginForm", "Direct Access", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qtractorPluginForm: public Ui_qtractorPluginForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTRACTORPLUGINFORM_H
