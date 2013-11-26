#ifndef SETTINGS_H
#define SETTINGS_H

#include <QString>

namespace settings_names
{
  //! UI
  const QString guiGroup = "GUI";
  const QString geometry = "geometry";
  const QString captureHotkey = "captureHotkey";

  //! Recognition
  const QString recogntionGroup = "Recognition";
  const QString tessDataPlace = "tessdata_dir";
  const QString ocrLanguage = "language";
  const QString imageScale = "image_scale";

  //! Translation
  const QString translationGroup = "Translation";
  const QString translationLanguage = "translation_language";

}

namespace settings_values
{
  const QString appName = "ScreenTranslator";
  const QString companyName = "Gres";

  //! UI
  const QString captureHotkey = "Ctrl+Alt+Z";

  //! Recognition
  const QString tessDataPlace = "./";
  const QString ocrLanguage = "eng";
  const int imageScale = 5;

  //! Translation
  const QString translationLanguage = "ru";
}

#endif // SETTINGS_H