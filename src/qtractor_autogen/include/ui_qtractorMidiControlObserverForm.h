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
** Form generated from reading UI file 'qtractorMidiControlObserverForm.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTRACTORMIDICONTROLOBSERVERFORM_H
#define UI_QTRACTORMIDICONTROLOBSERVERFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_qtractorMidiControlObserverForm
{
public:
    QGridLayout *gridLayout;
    QLabel *ControlTypeTextLabel;
    QComboBox *ControlTypeComboBox;
    QLabel *ChannelTextLabel;
    QSpinBox *ChannelSpinBox;
    QDialogButtonBox *DialogButtonBox;
    QLabel *ParamTextLabel;
    QComboBox *ParamComboBox;
    QCheckBox *LogarithmicCheckBox;
    QCheckBox *FeedbackCheckBox;
    QCheckBox *InvertCheckBox;
    QCheckBox *HookCheckBox;
    QCheckBox *LatchCheckBox;
    QHBoxLayout *hboxLayout;
    QPushButton *InputsPushButton;
    QPushButton *OutputsPushButton;
    QSpacerItem *spacerItem;

    void setupUi(QDialog *qtractorMidiControlObserverForm)
    {
        if (qtractorMidiControlObserverForm->objectName().isEmpty())
            qtractorMidiControlObserverForm->setObjectName(QString::fromUtf8("qtractorMidiControlObserverForm"));
        qtractorMidiControlObserverForm->resize(360, 180);
        const QIcon icon = QIcon(QString::fromUtf8(":/images/itemControllers.png"));
        qtractorMidiControlObserverForm->setWindowIcon(icon);
        gridLayout = new QGridLayout(qtractorMidiControlObserverForm);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(8, 8, 8, 8);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        ControlTypeTextLabel = new QLabel(qtractorMidiControlObserverForm);
        ControlTypeTextLabel->setObjectName(QString::fromUtf8("ControlTypeTextLabel"));

        gridLayout->addWidget(ControlTypeTextLabel, 0, 0, 1, 1);

        ControlTypeComboBox = new QComboBox(qtractorMidiControlObserverForm);
        ControlTypeComboBox->setObjectName(QString::fromUtf8("ControlTypeComboBox"));

        gridLayout->addWidget(ControlTypeComboBox, 0, 1, 1, 1);

        ChannelTextLabel = new QLabel(qtractorMidiControlObserverForm);
        ChannelTextLabel->setObjectName(QString::fromUtf8("ChannelTextLabel"));

        gridLayout->addWidget(ChannelTextLabel, 0, 2, 1, 1);

        ChannelSpinBox = new QSpinBox(qtractorMidiControlObserverForm);
        ChannelSpinBox->setObjectName(QString::fromUtf8("ChannelSpinBox"));
        ChannelSpinBox->setAccelerated(false);
        ChannelSpinBox->setMinimum(1);
        ChannelSpinBox->setMaximum(16);

        gridLayout->addWidget(ChannelSpinBox, 0, 3, 1, 1);

        DialogButtonBox = new QDialogButtonBox(qtractorMidiControlObserverForm);
        DialogButtonBox->setObjectName(QString::fromUtf8("DialogButtonBox"));
        DialogButtonBox->setOrientation(Qt::Vertical);
        DialogButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::Reset);

        gridLayout->addWidget(DialogButtonBox, 0, 4, 8, 1);

        ParamTextLabel = new QLabel(qtractorMidiControlObserverForm);
        ParamTextLabel->setObjectName(QString::fromUtf8("ParamTextLabel"));

        gridLayout->addWidget(ParamTextLabel, 1, 0, 1, 1);

        ParamComboBox = new QComboBox(qtractorMidiControlObserverForm);
        ParamComboBox->setObjectName(QString::fromUtf8("ParamComboBox"));

        gridLayout->addWidget(ParamComboBox, 1, 1, 1, 3);

        LogarithmicCheckBox = new QCheckBox(qtractorMidiControlObserverForm);
        LogarithmicCheckBox->setObjectName(QString::fromUtf8("LogarithmicCheckBox"));

        gridLayout->addWidget(LogarithmicCheckBox, 2, 1, 1, 3);

        FeedbackCheckBox = new QCheckBox(qtractorMidiControlObserverForm);
        FeedbackCheckBox->setObjectName(QString::fromUtf8("FeedbackCheckBox"));

        gridLayout->addWidget(FeedbackCheckBox, 3, 1, 1, 3);

        InvertCheckBox = new QCheckBox(qtractorMidiControlObserverForm);
        InvertCheckBox->setObjectName(QString::fromUtf8("InvertCheckBox"));

        gridLayout->addWidget(InvertCheckBox, 4, 1, 1, 3);

        HookCheckBox = new QCheckBox(qtractorMidiControlObserverForm);
        HookCheckBox->setObjectName(QString::fromUtf8("HookCheckBox"));

        gridLayout->addWidget(HookCheckBox, 5, 1, 1, 3);

        LatchCheckBox = new QCheckBox(qtractorMidiControlObserverForm);
        LatchCheckBox->setObjectName(QString::fromUtf8("LatchCheckBox"));

        gridLayout->addWidget(LatchCheckBox, 6, 1, 1, 3);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(4);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        InputsPushButton = new QPushButton(qtractorMidiControlObserverForm);
        InputsPushButton->setObjectName(QString::fromUtf8("InputsPushButton"));
        const QIcon icon1 = QIcon(QString::fromUtf8(":/images/itemMidiPortIn.png"));
        InputsPushButton->setIcon(icon1);

        hboxLayout->addWidget(InputsPushButton);

        OutputsPushButton = new QPushButton(qtractorMidiControlObserverForm);
        OutputsPushButton->setObjectName(QString::fromUtf8("OutputsPushButton"));
        const QIcon icon2 = QIcon(QString::fromUtf8(":/images/itemMidiPortOut.png"));
        OutputsPushButton->setIcon(icon2);

        hboxLayout->addWidget(OutputsPushButton);

        spacerItem = new QSpacerItem(8, 8, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        gridLayout->addLayout(hboxLayout, 7, 1, 1, 3);

#if QT_CONFIG(shortcut)
        ControlTypeTextLabel->setBuddy(ControlTypeComboBox);
        ChannelTextLabel->setBuddy(ChannelSpinBox);
        ParamTextLabel->setBuddy(ParamComboBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(ControlTypeComboBox, ChannelSpinBox);
        QWidget::setTabOrder(ChannelSpinBox, ParamComboBox);
        QWidget::setTabOrder(ParamComboBox, LogarithmicCheckBox);
        QWidget::setTabOrder(LogarithmicCheckBox, FeedbackCheckBox);
        QWidget::setTabOrder(FeedbackCheckBox, InvertCheckBox);
        QWidget::setTabOrder(InvertCheckBox, HookCheckBox);
        QWidget::setTabOrder(HookCheckBox, LatchCheckBox);
        QWidget::setTabOrder(LatchCheckBox, InputsPushButton);
        QWidget::setTabOrder(InputsPushButton, OutputsPushButton);
        QWidget::setTabOrder(OutputsPushButton, DialogButtonBox);

        retranslateUi(qtractorMidiControlObserverForm);

        QMetaObject::connectSlotsByName(qtractorMidiControlObserverForm);
    } // setupUi

    void retranslateUi(QDialog *qtractorMidiControlObserverForm)
    {
        qtractorMidiControlObserverForm->setWindowTitle(QCoreApplication::translate("qtractorMidiControlObserverForm", "MIDI Controller", nullptr));
        ControlTypeTextLabel->setText(QCoreApplication::translate("qtractorMidiControlObserverForm", "&Type:", nullptr));
#if QT_CONFIG(tooltip)
        ControlTypeComboBox->setToolTip(QCoreApplication::translate("qtractorMidiControlObserverForm", "MIDI event type", nullptr));
#endif // QT_CONFIG(tooltip)
        ChannelTextLabel->setText(QCoreApplication::translate("qtractorMidiControlObserverForm", "Cha&nnel:", nullptr));
#if QT_CONFIG(tooltip)
        ChannelSpinBox->setToolTip(QCoreApplication::translate("qtractorMidiControlObserverForm", "MIDI channel", nullptr));
#endif // QT_CONFIG(tooltip)
        ParamTextLabel->setText(QCoreApplication::translate("qtractorMidiControlObserverForm", "&Parameter:", nullptr));
#if QT_CONFIG(tooltip)
        ParamComboBox->setToolTip(QCoreApplication::translate("qtractorMidiControlObserverForm", "MIDI parameter", nullptr));
#endif // QT_CONFIG(tooltip)
        LogarithmicCheckBox->setText(QCoreApplication::translate("qtractorMidiControlObserverForm", "&Logarithmic", nullptr));
        FeedbackCheckBox->setText(QCoreApplication::translate("qtractorMidiControlObserverForm", "&Feedback", nullptr));
        InvertCheckBox->setText(QCoreApplication::translate("qtractorMidiControlObserverForm", "In&vert", nullptr));
        HookCheckBox->setText(QCoreApplication::translate("qtractorMidiControlObserverForm", "&Hook", nullptr));
        LatchCheckBox->setText(QCoreApplication::translate("qtractorMidiControlObserverForm", "L&atch", nullptr));
#if QT_CONFIG(tooltip)
        InputsPushButton->setToolTip(QCoreApplication::translate("qtractorMidiControlObserverForm", "Control input connections", nullptr));
#endif // QT_CONFIG(tooltip)
        InputsPushButton->setText(QCoreApplication::translate("qtractorMidiControlObserverForm", "&Inputs", nullptr));
#if QT_CONFIG(tooltip)
        OutputsPushButton->setToolTip(QCoreApplication::translate("qtractorMidiControlObserverForm", "Control output connections", nullptr));
#endif // QT_CONFIG(tooltip)
        OutputsPushButton->setText(QCoreApplication::translate("qtractorMidiControlObserverForm", "&Outputs", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qtractorMidiControlObserverForm: public Ui_qtractorMidiControlObserverForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTRACTORMIDICONTROLOBSERVERFORM_H
