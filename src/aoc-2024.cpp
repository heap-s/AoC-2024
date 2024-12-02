#include "aoc-2024.h"

#include <debug.h>

#include <KPluginFactory>

K_PLUGIN_FACTORY_WITH_JSON(AoC_2024Factory, "aoc-2024.json", registerPlugin<AoC_2024>(); )

AoC_2024::AoC_2024(QObject* parent, const KPluginMetaData& metaData, const QVariantList& args)
    : KDevelop::IPlugin(QStringLiteral("aoc-2024"), parent, metaData)
{
    Q_UNUSED(args);

    qCDebug(PLUGIN_AOC_2024) << "Hello world, my plugin is loaded!";
}

// needed for QObject class created from K_PLUGIN_FACTORY_WITH_JSON
#include "aoc-2024.moc"
#include "moc_aoc-2024.cpp"
