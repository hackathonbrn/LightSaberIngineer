package com.example.myapplication.schemeerrors

enum class ErrorScheme(
    val title: String,
    val description: String,
    val MANUAL_URL: String
) {
    BUILD(
        "Ошибка сборки",
        "Вы забыли какой-то из элементов!",
        "https://github.com/"
    ),
    LOW_BATTERY(
        "Не хватает энергии",
        "Мощности аккумулятора нехватает для питания излучателя",
        "https://github.com/"
    ),
}