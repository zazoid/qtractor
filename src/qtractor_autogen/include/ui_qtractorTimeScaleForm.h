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
** Form generated from reading UI file 'qtractorTimeScaleForm.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTRACTORTIMESCALEFORM_H
#define UI_QTRACTORTIMESCALEFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qtractorSpinBox.h"

QT_BEGIN_NAMESPACE

class Ui_qtractorTimeScaleForm
{
public:
    QVBoxLayout *vboxLayout;
    QSplitter *splitter;
    QTreeWidget *TimeScaleListView;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *BarTextLabel;
    QSpinBox *BarSpinBox;
    QLabel *TimeTextLabel;
    qtractorTimeSpinBox *TimeSpinBox;
    QSpacerItem *spacerItem;
    QLabel *TempoTextLabel;
    qtractorTempoSpinBox *TempoSpinBox;
    QPushButton *TempoTapPushButton;
    QSpacerItem *spacerItem1;
    QLabel *KeySignatureTextLabel;
    QComboBox *KeySignatureAccidentalsComboBox;
    QComboBox *KeySignatureModeComboBox;
    QSpacerItem *spacerItem2;
    QLabel *MarkerTextLabel;
    QLineEdit *MarkerTextLineEdit;
    QToolButton *MarkerColorToolButton;
    QSpacerItem *spacerItem3;
    QLabel *TempoFactorTextLabel;
    QDoubleSpinBox *TempoFactorSpinBox;
    QPushButton *TempoFactorPushButton;
    QHBoxLayout *hboxLayout;
    QPushButton *RefreshPushButton;
    QSpacerItem *spacerItem4;
    QPushButton *AddPushButton;
    QPushButton *UpdatePushButton;
    QPushButton *RemovePushButton;
    QPushButton *ClosePushButton;

    void setupUi(QDialog *qtractorTimeScaleForm)
    {
        if (qtractorTimeScaleForm->objectName().isEmpty())
            qtractorTimeScaleForm->setObjectName(QString::fromUtf8("qtractorTimeScaleForm"));
        qtractorTimeScaleForm->resize(560, 287);
        qtractorTimeScaleForm->setFocusPolicy(Qt::StrongFocus);
        const QIcon icon = QIcon(QString::fromUtf8(":/images/qtractorTracks.png"));
        qtractorTimeScaleForm->setWindowIcon(icon);
        vboxLayout = new QVBoxLayout(qtractorTimeScaleForm);
        vboxLayout->setSpacing(4);
        vboxLayout->setContentsMargins(8, 8, 8, 8);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        splitter = new QSplitter(qtractorTimeScaleForm);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        TimeScaleListView = new QTreeWidget(splitter);
        TimeScaleListView->setObjectName(QString::fromUtf8("TimeScaleListView"));
        TimeScaleListView->setMinimumSize(QSize(320, 120));
        TimeScaleListView->setAlternatingRowColors(true);
        TimeScaleListView->setRootIsDecorated(false);
        TimeScaleListView->setUniformRowHeights(true);
        TimeScaleListView->setAllColumnsShowFocus(true);
        splitter->addWidget(TimeScaleListView);
        widget = new QWidget(splitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(8, 8, 8, 8);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(8, 0, 0, 8);
        BarTextLabel = new QLabel(widget);
        BarTextLabel->setObjectName(QString::fromUtf8("BarTextLabel"));
        BarTextLabel->setMinimumSize(QSize(60, 0));

        gridLayout->addWidget(BarTextLabel, 0, 0, 1, 1);

        BarSpinBox = new QSpinBox(widget);
        BarSpinBox->setObjectName(QString::fromUtf8("BarSpinBox"));
        BarSpinBox->setMinimumSize(QSize(60, 0));
        BarSpinBox->setMinimum(1);
        BarSpinBox->setMaximum(99999);
        BarSpinBox->setValue(1);

        gridLayout->addWidget(BarSpinBox, 1, 0, 1, 1);

        TimeTextLabel = new QLabel(widget);
        TimeTextLabel->setObjectName(QString::fromUtf8("TimeTextLabel"));
        TimeTextLabel->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(TimeTextLabel, 0, 1, 1, 5);

        TimeSpinBox = new qtractorTimeSpinBox(widget);
        TimeSpinBox->setObjectName(QString::fromUtf8("TimeSpinBox"));
        TimeSpinBox->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(TimeSpinBox, 1, 1, 1, 5);

        spacerItem = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(spacerItem, 2, 0, 1, 6);

        TempoTextLabel = new QLabel(widget);
        TempoTextLabel->setObjectName(QString::fromUtf8("TempoTextLabel"));
        TempoTextLabel->setAlignment(Qt::AlignRight|Qt::AlignVCenter);

        gridLayout->addWidget(TempoTextLabel, 3, 0, 1, 1);

        TempoSpinBox = new qtractorTempoSpinBox(widget);
        TempoSpinBox->setObjectName(QString::fromUtf8("TempoSpinBox"));
        TempoSpinBox->setMinimumSize(QSize(80, 0));

        gridLayout->addWidget(TempoSpinBox, 3, 1, 1, 3);

        TempoTapPushButton = new QPushButton(widget);
        TempoTapPushButton->setObjectName(QString::fromUtf8("TempoTapPushButton"));

        gridLayout->addWidget(TempoTapPushButton, 3, 4, 1, 2);

        spacerItem1 = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(spacerItem1, 4, 0, 1, 6);

        KeySignatureTextLabel = new QLabel(widget);
        KeySignatureTextLabel->setObjectName(QString::fromUtf8("KeySignatureTextLabel"));
        KeySignatureTextLabel->setAlignment(Qt::AlignRight|Qt::AlignVCenter);

        gridLayout->addWidget(KeySignatureTextLabel, 5, 0, 1, 2);

        KeySignatureAccidentalsComboBox = new QComboBox(widget);
        KeySignatureAccidentalsComboBox->setObjectName(QString::fromUtf8("KeySignatureAccidentalsComboBox"));
        KeySignatureAccidentalsComboBox->setEditable(false);

        gridLayout->addWidget(KeySignatureAccidentalsComboBox, 5, 2, 1, 2);

        KeySignatureModeComboBox = new QComboBox(widget);
        KeySignatureModeComboBox->addItem(QString());
        KeySignatureModeComboBox->addItem(QString());
        KeySignatureModeComboBox->addItem(QString());
        KeySignatureModeComboBox->setObjectName(QString::fromUtf8("KeySignatureModeComboBox"));
        KeySignatureModeComboBox->setEditable(false);

        gridLayout->addWidget(KeySignatureModeComboBox, 5, 4, 1, 2);

        spacerItem2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(spacerItem2, 6, 0, 1, 6);

        MarkerTextLabel = new QLabel(widget);
        MarkerTextLabel->setObjectName(QString::fromUtf8("MarkerTextLabel"));

        gridLayout->addWidget(MarkerTextLabel, 7, 0, 1, 6);

        MarkerTextLineEdit = new QLineEdit(widget);
        MarkerTextLineEdit->setObjectName(QString::fromUtf8("MarkerTextLineEdit"));

        gridLayout->addWidget(MarkerTextLineEdit, 8, 0, 1, 5);

        MarkerColorToolButton = new QToolButton(widget);
        MarkerColorToolButton->setObjectName(QString::fromUtf8("MarkerColorToolButton"));
        MarkerColorToolButton->setMinimumSize(QSize(24, 24));
        const QIcon icon1 = QIcon(QString::fromUtf8(":/images/formColor.png"));
        MarkerColorToolButton->setIcon(icon1);

        gridLayout->addWidget(MarkerColorToolButton, 8, 5, 1, 1);

        spacerItem3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(spacerItem3, 9, 0, 1, 6);

        TempoFactorTextLabel = new QLabel(widget);
        TempoFactorTextLabel->setObjectName(QString::fromUtf8("TempoFactorTextLabel"));
        TempoFactorTextLabel->setAlignment(Qt::AlignRight|Qt::AlignVCenter);

        gridLayout->addWidget(TempoFactorTextLabel, 10, 0, 1, 3);

        TempoFactorSpinBox = new QDoubleSpinBox(widget);
        TempoFactorSpinBox->setObjectName(QString::fromUtf8("TempoFactorSpinBox"));
        TempoFactorSpinBox->setAccelerated(true);
        TempoFactorSpinBox->setDecimals(2);
        TempoFactorSpinBox->setMinimum(0.010000000000000);
        TempoFactorSpinBox->setMaximum(10.000000000000000);
        TempoFactorSpinBox->setSingleStep(0.010000000000000);
        TempoFactorSpinBox->setValue(1.000000000000000);

        gridLayout->addWidget(TempoFactorSpinBox, 10, 3, 1, 1);

        TempoFactorPushButton = new QPushButton(widget);
        TempoFactorPushButton->setObjectName(QString::fromUtf8("TempoFactorPushButton"));

        gridLayout->addWidget(TempoFactorPushButton, 10, 4, 1, 2);

        splitter->addWidget(widget);

        vboxLayout->addWidget(splitter);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(4);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        RefreshPushButton = new QPushButton(qtractorTimeScaleForm);
        RefreshPushButton->setObjectName(QString::fromUtf8("RefreshPushButton"));
        const QIcon icon2 = QIcon(QString::fromUtf8(":/images/formRefresh.png"));
        RefreshPushButton->setIcon(icon2);

        hboxLayout->addWidget(RefreshPushButton);

        spacerItem4 = new QSpacerItem(20, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem4);

        AddPushButton = new QPushButton(qtractorTimeScaleForm);
        AddPushButton->setObjectName(QString::fromUtf8("AddPushButton"));
        const QIcon icon3 = QIcon(QString::fromUtf8(":/images/formAdd.png"));
        AddPushButton->setIcon(icon3);

        hboxLayout->addWidget(AddPushButton);

        UpdatePushButton = new QPushButton(qtractorTimeScaleForm);
        UpdatePushButton->setObjectName(QString::fromUtf8("UpdatePushButton"));
        const QIcon icon4 = QIcon(QString::fromUtf8(":/images/formAccept.png"));
        UpdatePushButton->setIcon(icon4);

        hboxLayout->addWidget(UpdatePushButton);

        RemovePushButton = new QPushButton(qtractorTimeScaleForm);
        RemovePushButton->setObjectName(QString::fromUtf8("RemovePushButton"));
        const QIcon icon5 = QIcon(QString::fromUtf8(":/images/formRemove.png"));
        RemovePushButton->setIcon(icon5);

        hboxLayout->addWidget(RemovePushButton);

        ClosePushButton = new QPushButton(qtractorTimeScaleForm);
        ClosePushButton->setObjectName(QString::fromUtf8("ClosePushButton"));

        hboxLayout->addWidget(ClosePushButton);


        vboxLayout->addLayout(hboxLayout);

#if QT_CONFIG(shortcut)
        BarTextLabel->setBuddy(BarSpinBox);
        TimeTextLabel->setBuddy(TimeSpinBox);
        TempoTextLabel->setBuddy(TempoSpinBox);
        KeySignatureTextLabel->setBuddy(KeySignatureAccidentalsComboBox);
        MarkerTextLabel->setBuddy(MarkerTextLineEdit);
        TempoFactorTextLabel->setBuddy(TempoFactorSpinBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(TimeScaleListView, BarSpinBox);
        QWidget::setTabOrder(BarSpinBox, TempoSpinBox);
        QWidget::setTabOrder(TempoSpinBox, TempoTapPushButton);
        QWidget::setTabOrder(TempoTapPushButton, KeySignatureAccidentalsComboBox);
        QWidget::setTabOrder(KeySignatureAccidentalsComboBox, KeySignatureModeComboBox);
        QWidget::setTabOrder(KeySignatureModeComboBox, MarkerTextLineEdit);
        QWidget::setTabOrder(MarkerTextLineEdit, MarkerColorToolButton);
        QWidget::setTabOrder(MarkerColorToolButton, TempoFactorSpinBox);
        QWidget::setTabOrder(TempoFactorSpinBox, TempoFactorPushButton);
        QWidget::setTabOrder(TempoFactorPushButton, RefreshPushButton);
        QWidget::setTabOrder(RefreshPushButton, AddPushButton);
        QWidget::setTabOrder(AddPushButton, UpdatePushButton);
        QWidget::setTabOrder(UpdatePushButton, RemovePushButton);
        QWidget::setTabOrder(RemovePushButton, ClosePushButton);

        retranslateUi(qtractorTimeScaleForm);

        QMetaObject::connectSlotsByName(qtractorTimeScaleForm);
    } // setupUi

    void retranslateUi(QDialog *qtractorTimeScaleForm)
    {
        qtractorTimeScaleForm->setWindowTitle(QCoreApplication::translate("qtractorTimeScaleForm", "Tempo Map / Markers", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = TimeScaleListView->headerItem();
        ___qtreewidgetitem->setText(4, QCoreApplication::translate("qtractorTimeScaleForm", "Marker", nullptr));
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("qtractorTimeScaleForm", "Key", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("qtractorTimeScaleForm", "Tempo", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("qtractorTimeScaleForm", "Time", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("qtractorTimeScaleForm", "Bar", nullptr));
#if QT_CONFIG(tooltip)
        TimeScaleListView->setToolTip(QCoreApplication::translate("qtractorTimeScaleForm", "Tempo map / Markers", nullptr));
#endif // QT_CONFIG(tooltip)
        BarTextLabel->setText(QCoreApplication::translate("qtractorTimeScaleForm", "&Bar:", nullptr));
#if QT_CONFIG(tooltip)
        BarSpinBox->setToolTip(QCoreApplication::translate("qtractorTimeScaleForm", "Bar location", nullptr));
#endif // QT_CONFIG(tooltip)
        TimeTextLabel->setText(QCoreApplication::translate("qtractorTimeScaleForm", "T&ime:", nullptr));
#if QT_CONFIG(tooltip)
        TimeSpinBox->setToolTip(QCoreApplication::translate("qtractorTimeScaleForm", "Time/frame location", nullptr));
#endif // QT_CONFIG(tooltip)
        TempoTextLabel->setText(QCoreApplication::translate("qtractorTimeScaleForm", "&Tempo:", nullptr));
#if QT_CONFIG(tooltip)
        TempoSpinBox->setToolTip(QCoreApplication::translate("qtractorTimeScaleForm", "Tempo (BPM) / Time signature", nullptr));
#endif // QT_CONFIG(tooltip)
        TempoTapPushButton->setText(QCoreApplication::translate("qtractorTimeScaleForm", "T&ap", nullptr));
        KeySignatureTextLabel->setText(QCoreApplication::translate("qtractorTimeScaleForm", "&Key signature:", nullptr));
#if QT_CONFIG(tooltip)
        KeySignatureAccidentalsComboBox->setToolTip(QCoreApplication::translate("qtractorTimeScaleForm", "Key signature (accidentals)", nullptr));
#endif // QT_CONFIG(tooltip)
        KeySignatureModeComboBox->setItemText(0, QCoreApplication::translate("qtractorTimeScaleForm", "-", nullptr));
        KeySignatureModeComboBox->setItemText(1, QCoreApplication::translate("qtractorTimeScaleForm", "Major", nullptr));
        KeySignatureModeComboBox->setItemText(2, QCoreApplication::translate("qtractorTimeScaleForm", "Minor", nullptr));

#if QT_CONFIG(tooltip)
        KeySignatureModeComboBox->setToolTip(QCoreApplication::translate("qtractorTimeScaleForm", "Key signature (mode)", nullptr));
#endif // QT_CONFIG(tooltip)
        MarkerTextLabel->setText(QCoreApplication::translate("qtractorTimeScaleForm", "&Marker:", nullptr));
#if QT_CONFIG(tooltip)
        MarkerTextLineEdit->setToolTip(QCoreApplication::translate("qtractorTimeScaleForm", "Marker text", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        MarkerColorToolButton->setToolTip(QCoreApplication::translate("qtractorTimeScaleForm", "Marker color", nullptr));
#endif // QT_CONFIG(tooltip)
        MarkerColorToolButton->setText(QCoreApplication::translate("qtractorTimeScaleForm", "...", nullptr));
        TempoFactorTextLabel->setText(QCoreApplication::translate("qtractorTimeScaleForm", "Tempo &scale factor:", nullptr));
#if QT_CONFIG(tooltip)
        TempoFactorSpinBox->setToolTip(QCoreApplication::translate("qtractorTimeScaleForm", "Tempo scale factor", nullptr));
#endif // QT_CONFIG(tooltip)
        TempoFactorPushButton->setText(QCoreApplication::translate("qtractorTimeScaleForm", "App&ly", nullptr));
#if QT_CONFIG(tooltip)
        RefreshPushButton->setToolTip(QCoreApplication::translate("qtractorTimeScaleForm", "Refresh tempo map", nullptr));
#endif // QT_CONFIG(tooltip)
        RefreshPushButton->setText(QCoreApplication::translate("qtractorTimeScaleForm", "Re&fresh", nullptr));
#if QT_CONFIG(tooltip)
        AddPushButton->setToolTip(QCoreApplication::translate("qtractorTimeScaleForm", "Add node", nullptr));
#endif // QT_CONFIG(tooltip)
        AddPushButton->setText(QCoreApplication::translate("qtractorTimeScaleForm", "&Add", nullptr));
#if QT_CONFIG(tooltip)
        UpdatePushButton->setToolTip(QCoreApplication::translate("qtractorTimeScaleForm", "Update node", nullptr));
#endif // QT_CONFIG(tooltip)
        UpdatePushButton->setText(QCoreApplication::translate("qtractorTimeScaleForm", "&Update", nullptr));
#if QT_CONFIG(tooltip)
        RemovePushButton->setToolTip(QCoreApplication::translate("qtractorTimeScaleForm", "Remove node", nullptr));
#endif // QT_CONFIG(tooltip)
        RemovePushButton->setText(QCoreApplication::translate("qtractorTimeScaleForm", "&Remove", nullptr));
#if QT_CONFIG(tooltip)
        ClosePushButton->setToolTip(QCoreApplication::translate("qtractorTimeScaleForm", "Close this dialog", nullptr));
#endif // QT_CONFIG(tooltip)
        ClosePushButton->setText(QCoreApplication::translate("qtractorTimeScaleForm", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qtractorTimeScaleForm: public Ui_qtractorTimeScaleForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTRACTORTIMESCALEFORM_H
