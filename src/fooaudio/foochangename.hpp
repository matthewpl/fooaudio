/**********************************************************************
 *
 * fooaudio
 * Copyright (C) 2009-2010  fooaudio team
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 ***********************************************************************/

#ifndef FOOCHANGENAME_HPP
#define FOOCHANGENAME_HPP

#include <QWidget>

class QTabBar;
class QLineEdit;
class QPushButton;

class FooChangeName : public QWidget
{
	Q_OBJECT

public:
	FooChangeName(int, QWidget *parent = 0);
	~FooChangeName();

private:
	int index;

	QTabBar *tabBar;
	QLineEdit *lineEdit;
	QPushButton *saveButton;
	QPushButton *closeButton;

public slots:
	void save();
};

#endif // FOOCHANGENAME_HPP
