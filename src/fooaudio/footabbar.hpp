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

#ifndef _FOOTABBAR_HPP_
#define _FOOTABBAR_HPP_

#include <QTabBar>
#include "footabwidget.hpp"

class FooTabWidget;

/*
 * Tab bar with a few more features such as a context menu
 */

class FooTabBar : public QTabBar
{
	Q_OBJECT

signals:
	void newTab();
	void cloneTab(int index);
	void closeTab(int index);
	void closeOtherTabs(int index);
	void renameTab(int index);

public:
	FooTabBar (QWidget *parent = 0);

	QTabBar::ButtonPosition freeSide ();

protected:
	void mouseDoubleClickEvent (QMouseEvent *);
	void mousePressEvent (QMouseEvent *);
	void mouseMoveEvent (QMouseEvent *);

	QSize tabSizeHint (int index) const;
	void tabInserted (int position);
	void tabRemoved (int position);

private slots:
	void cloneTab ();
	void closeTab ();
	void closeOtherTabs ();
	void renameTab ();
	void contextMenuRequested (const QPoint &);
	//	void updateViewToolBarAction();

private:
	void updateVisibility ();
	friend class TabWidget;

	QPoint m_dragStartPos;
	QAction *m_viewTabBarAction;
	bool m_showTabBarWhenOneTab;
};

#endif // _FOOTABBAT_HPP_
