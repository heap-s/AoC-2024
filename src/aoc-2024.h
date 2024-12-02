#ifndef AOC_2024_H
#define AOC_2024_H

#include <interfaces/iplugin.h>

class AoC_2024 : public KDevelop::IPlugin
{
    Q_OBJECT

public:
    // KPluginFactory-based plugin wants constructor with this signature
    AoC_2024(QObject* parent, const KPluginMetaData& metaData, const QVariantList& args);
};

#endif // AOC_2024_H
