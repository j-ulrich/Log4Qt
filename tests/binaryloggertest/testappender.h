#ifndef TESTAPPENDER_H
#define TESTAPPENDER_H

#include "appenderskeleton.h"

#include <QStringList>

class  TestAppender : public Log4Qt::AppenderSkeleton
{
    Q_OBJECT
public:
    explicit TestAppender(QObject *pParent = Q_NULLPTR);
    TestAppender(const TestAppender &) = delete;
    TestAppender &operator=(const TestAppender &) = delete;

    QStringList list() const;
    QStringList clearList();
    virtual bool requiresLayout() const Q_DECL_OVERRIDE;

protected:
    virtual void append(const Log4Qt::LoggingEvent &rEvent) Q_DECL_OVERRIDE;

private:
    QStringList mMessages;
};

#endif // TESTAPPENDER_H
