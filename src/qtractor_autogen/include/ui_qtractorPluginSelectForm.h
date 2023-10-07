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
** Form generated from reading UI file 'qtractorPluginSelectForm.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTRACTORPLUGINSELECTFORM_H
#define UI_QTRACTORPLUGINSELECTFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_qtractorPluginSelectForm
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QToolButton *PluginResetToolButton;
    QComboBox *PluginSearchComboBox;
    QComboBox *PluginTypeComboBox;
    QTreeWidget *PluginListView;
    QHBoxLayout *hboxLayout1;
    QPushButton *PluginRescanPushButton;
    QSpacerItem *spacerItem;
    QProgressBar *PluginScanProgressBar;
    QSpacerItem *spacerItem1;
    QDialogButtonBox *DialogButtonBox;

    void setupUi(QDialog *qtractorPluginSelectForm)
    {
        if (qtractorPluginSelectForm->objectName().isEmpty())
            qtractorPluginSelectForm->setObjectName(QString::fromUtf8("qtractorPluginSelectForm"));
        qtractorPluginSelectForm->resize(480, 320);
        qtractorPluginSelectForm->setSizeGripEnabled(true);
        vboxLayout = new QVBoxLayout(qtractorPluginSelectForm);
        vboxLayout->setSpacing(4);
        vboxLayout->setContentsMargins(4, 4, 4, 4);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(4);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        PluginResetToolButton = new QToolButton(qtractorPluginSelectForm);
        PluginResetToolButton->setObjectName(QString::fromUtf8("PluginResetToolButton"));
        PluginResetToolButton->setMinimumSize(QSize(22, 22));
        PluginResetToolButton->setMaximumSize(QSize(22, 22));
        PluginResetToolButton->setFocusPolicy(Qt::TabFocus);

        hboxLayout->addWidget(PluginResetToolButton);

        PluginSearchComboBox = new QComboBox(qtractorPluginSelectForm);
        PluginSearchComboBox->setObjectName(QString::fromUtf8("PluginSearchComboBox"));
        PluginSearchComboBox->setMinimumSize(QSize(320, 0));
        PluginSearchComboBox->setEditable(true);

        hboxLayout->addWidget(PluginSearchComboBox);

        PluginTypeComboBox = new QComboBox(qtractorPluginSelectForm);
        PluginTypeComboBox->setObjectName(QString::fromUtf8("PluginTypeComboBox"));
        PluginTypeComboBox->setMaximumSize(QSize(80, 22));
        PluginTypeComboBox->setEditable(false);

        hboxLayout->addWidget(PluginTypeComboBox);


        vboxLayout->addLayout(hboxLayout);

        PluginListView = new QTreeWidget(qtractorPluginSelectForm);
        PluginListView->setObjectName(QString::fromUtf8("PluginListView"));
        PluginListView->setMinimumSize(QSize(420, 0));
        PluginListView->setAlternatingRowColors(true);
        PluginListView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        PluginListView->setRootIsDecorated(false);
        PluginListView->setUniformRowHeights(true);
        PluginListView->setItemsExpandable(false);
        PluginListView->setAllColumnsShowFocus(true);
        PluginListView->setSortingEnabled(true);

        vboxLayout->addWidget(PluginListView);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(4);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        PluginRescanPushButton = new QPushButton(qtractorPluginSelectForm);
        PluginRescanPushButton->setObjectName(QString::fromUtf8("PluginRescanPushButton"));
        const QIcon icon = QIcon(QString::fromUtf8(":/images/formRefresh.png"));
        PluginRescanPushButton->setIcon(icon);

        hboxLayout1->addWidget(PluginRescanPushButton);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);

        PluginScanProgressBar = new QProgressBar(qtractorPluginSelectForm);
        PluginScanProgressBar->setObjectName(QString::fromUtf8("PluginScanProgressBar"));
        PluginScanProgressBar->setMinimumSize(QSize(240, 0));

        hboxLayout1->addWidget(PluginScanProgressBar);

        spacerItem1 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        DialogButtonBox = new QDialogButtonBox(qtractorPluginSelectForm);
        DialogButtonBox->setObjectName(QString::fromUtf8("DialogButtonBox"));
        DialogButtonBox->setOrientation(Qt::Horizontal);
        DialogButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        hboxLayout1->addWidget(DialogButtonBox);


        vboxLayout->addLayout(hboxLayout1);

        QWidget::setTabOrder(PluginResetToolButton, PluginSearchComboBox);
        QWidget::setTabOrder(PluginSearchComboBox, PluginTypeComboBox);
        QWidget::setTabOrder(PluginTypeComboBox, PluginListView);
        QWidget::setTabOrder(PluginListView, PluginRescanPushButton);
        QWidget::setTabOrder(PluginRescanPushButton, DialogButtonBox);

        retranslateUi(qtractorPluginSelectForm);

        QMetaObject::connectSlotsByName(qtractorPluginSelectForm);
    } // setupUi

    void retranslateUi(QDialog *qtractorPluginSelectForm)
    {
        qtractorPluginSelectForm->setWindowTitle(QCoreApplication::translate("qtractorPluginSelectForm", "Plugins", nullptr));
#if QT_CONFIG(tooltip)
        PluginResetToolButton->setToolTip(QCoreApplication::translate("qtractorPluginSelectForm", "Reset filter", nullptr));
#endif // QT_CONFIG(tooltip)
        PluginResetToolButton->setText(QCoreApplication::translate("qtractorPluginSelectForm", "X", nullptr));
#if QT_CONFIG(tooltip)
        PluginSearchComboBox->setToolTip(QCoreApplication::translate("qtractorPluginSelectForm", "Plugin search string (regular expression)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        PluginTypeComboBox->setToolTip(QCoreApplication::translate("qtractorPluginSelectForm", "Plugin type", nullptr));
#endif // QT_CONFIG(tooltip)
        QTreeWidgetItem *___qtreewidgetitem = PluginListView->headerItem();
        ___qtreewidgetitem->setText(8, QCoreApplication::translate("qtractorPluginSelectForm", "Type", nullptr));
        ___qtreewidgetitem->setText(7, QCoreApplication::translate("qtractorPluginSelectForm", "Instances", nullptr));
        ___qtreewidgetitem->setText(6, QCoreApplication::translate("qtractorPluginSelectForm", "Index", nullptr));
        ___qtreewidgetitem->setText(5, QCoreApplication::translate("qtractorPluginSelectForm", "Path", nullptr));
        ___qtreewidgetitem->setText(4, QCoreApplication::translate("qtractorPluginSelectForm", "Modes", nullptr));
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("qtractorPluginSelectForm", "Control", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("qtractorPluginSelectForm", "MIDI", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("qtractorPluginSelectForm", "Audio", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("qtractorPluginSelectForm", "Name", nullptr));
#if QT_CONFIG(tooltip)
        PluginListView->setToolTip(QCoreApplication::translate("qtractorPluginSelectForm", "Available plugins", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        PluginRescanPushButton->setToolTip(QCoreApplication::translate("qtractorPluginSelectForm", "Rescan for available plugins (refresh)", nullptr));
#endif // QT_CONFIG(tooltip)
        PluginRescanPushButton->setText(QCoreApplication::translate("qtractorPluginSelectForm", "&Rescan", nullptr));
#if QT_CONFIG(tooltip)
        PluginScanProgressBar->setToolTip(QCoreApplication::translate("qtractorPluginSelectForm", "Plugin scanning in progress...", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class qtractorPluginSelectForm: public Ui_qtractorPluginSelectForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTRACTORPLUGINSELECTFORM_H
