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
** Form generated from reading UI file 'qtractorShortcutForm.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTRACTORSHORTCUTFORM_H
#define UI_QTRACTORSHORTCUTFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_qtractorShortcutForm
{
public:
    QVBoxLayout *vboxLayout;
    QTreeWidget *ShortcutTable;
    QDialogButtonBox *DialogButtonBox;

    void setupUi(QDialog *qtractorShortcutForm)
    {
        if (qtractorShortcutForm->objectName().isEmpty())
            qtractorShortcutForm->setObjectName(QString::fromUtf8("qtractorShortcutForm"));
        qtractorShortcutForm->resize(640, 320);
        const QIcon icon = QIcon(QString::fromUtf8(":/images/helpShortcuts.png"));
        qtractorShortcutForm->setWindowIcon(icon);
        vboxLayout = new QVBoxLayout(qtractorShortcutForm);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        ShortcutTable = new QTreeWidget(qtractorShortcutForm);
        ShortcutTable->setObjectName(QString::fromUtf8("ShortcutTable"));
        ShortcutTable->setTabKeyNavigation(false);
        ShortcutTable->setAlternatingRowColors(true);
        ShortcutTable->setSelectionMode(QAbstractItemView::SingleSelection);
        ShortcutTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        ShortcutTable->setIconSize(QSize(16, 16));
        ShortcutTable->setRootIsDecorated(false);
        ShortcutTable->setUniformRowHeights(true);
        ShortcutTable->setItemsExpandable(false);
        ShortcutTable->setAllColumnsShowFocus(true);
        ShortcutTable->setExpandsOnDoubleClick(false);
        ShortcutTable->setColumnCount(4);

        vboxLayout->addWidget(ShortcutTable);

        DialogButtonBox = new QDialogButtonBox(qtractorShortcutForm);
        DialogButtonBox->setObjectName(QString::fromUtf8("DialogButtonBox"));
        DialogButtonBox->setOrientation(Qt::Horizontal);
        DialogButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(DialogButtonBox);

        QWidget::setTabOrder(ShortcutTable, DialogButtonBox);

        retranslateUi(qtractorShortcutForm);

        QMetaObject::connectSlotsByName(qtractorShortcutForm);
    } // setupUi

    void retranslateUi(QDialog *qtractorShortcutForm)
    {
        qtractorShortcutForm->setWindowTitle(QCoreApplication::translate("qtractorShortcutForm", "Shortcuts", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = ShortcutTable->headerItem();
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("qtractorShortcutForm", "MIDI Controller", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("qtractorShortcutForm", "Keyboard", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("qtractorShortcutForm", "Description", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("qtractorShortcutForm", "Menu/Action", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qtractorShortcutForm: public Ui_qtractorShortcutForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTRACTORSHORTCUTFORM_H
