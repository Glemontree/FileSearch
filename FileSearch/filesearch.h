#ifndef FILESEARCH_H
#define FILESEARCH_H

#include <QDialog>
#include <QDir>

class QComboBox;
class QLabel;
class QPushButton;
class QTableWidget;
class QTableWidgetItem;

class FileSearch : public QDialog
{
	Q_OBJECT

public:
	FileSearch(QWidget *parent = 0);
	~FileSearch();

private slots:
	void browse();
	void find();
	void openFileOfItem(int row, int column);

private:
	QStringList findFiles(const QStringList& files, const QString& text);
	void showFiles(const QStringList& files);
	QPushButton* createButton(const QString& text, const char* member);
	QComboBox* createComboBox(const QString& text = QString());
	void createFilesTable();

private:
	QComboBox* fileComboBox;
	QComboBox* textComboBox;
	QComboBox* directoryComboBox;
	QLabel* fileLabel;
	QLabel* textLabel;
	QLabel* directoryLabel;
	QLabel* filesFoundLabel;
	QPushButton* browseButton;
	QPushButton* findButton;
	QTableWidget* filesTable;

	QDir currentDir;
};

#endif // FILESEARCH_H
