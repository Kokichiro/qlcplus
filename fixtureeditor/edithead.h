/*
  Q Light Controller - Fixture Editor
  edithead.h

  Copyright (C) Heikki Junnila

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0.txt

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
*/

#ifndef EDITHEAD_H
#define EDITHEAD_H

#include <QDialog>

#include "ui_edithead.h"
#include "qlcfixturehead.h"

class QTreeWidgetItem;
class QLCFixtureMode;

class EditHead : public QDialog, public Ui_EditHead
{
    Q_OBJECT

public:
    EditHead(QWidget* parent, const QLCFixtureHead& head, const QLCFixtureMode* mode);
    ~EditHead();

    QLCFixtureHead head() const;

private:
    void fillChannelTree(const QLCFixtureMode* mode);

private slots:
    void slotItemChanged(QTreeWidgetItem* item, int column);

private:
    QLCFixtureHead m_head;
};

#endif
