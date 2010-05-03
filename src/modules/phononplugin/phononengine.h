/*********************************************************************************
 * FooAudio
 * Copyright (C) 2009  Dariusz Mikulski <dariusz.mikulski@gmail.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
**********************************************************************************/

#ifndef PHONONENGINE_H__
#define PHONONENGINE_H__

#include <abstractaudioplugin.h>

#include <QObject>
#include <QUrl>

namespace FooAudio
{
	class PhononEngine : public AbstractAudioPlugin
	{
		Q_OBJECT

	public:
		PhononEngine(QObject *parent = 0);
		~PhononEngine();

		bool isPlaying();
		bool isStopped();
		bool isPaused();
		bool isMuted();
		void setMuted(bool);

		qint64 totalTime() const;
		void seek(const qint64 time);

		//QMultiMap<QString, QString> metaData(const QUrl url);
		void metaData(const QUrl url);
		QStringList metaData(const QString key, const QUrl url);
		QStringList mimeTypes();

	signals:
		void aboutToFinish();
		void progress(const qint64 time);
		void willPlayNow(const QUrl file);
		void metaDataChanged(QMultiMap<QString, QString> newMetaData, QUrl url);

	public slots:
		void stop();
		void play();
		void pause();
		void clearQueue();
		void enqueueNextFile(const QUrl file);
		void playFile(const QUrl file);
		void setVolume(const int volume);

	private slots:
		void newMetaData();

	private:
		class PhononEnginePrivate;
		PhononEnginePrivate * d;
	};
}

#endif // PHONONENGINE_H__
