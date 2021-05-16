package com.commandnameexception.lasersaber.schemeerrors

enum class ErrorScheme(
    val title: String,
    val description: String,
    val MANUAL_URL: String
) {
    BUILD(
        "Ошибка сборки",
        "Вы забыли какой-то из элементов!",
        "file:///android_asset/start.html"
    ),
    LOW_BATTERY(
        "Не хватает энергии",
        "Мощности аккумулятора нехватает для питания излучателя!",
        "file:///android_asset/battery.html"
    ),
    BAD_LENC(
        "Что-то не так с линзой!",
        "Луч не сфокусировался и чуть не уничтожил рабочий стол, нужно сменить линзу!",
        "file:///android_asset/battery.html"
    )
}