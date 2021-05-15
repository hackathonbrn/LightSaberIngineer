package com.example.myapplication.schemeerrors

enum class ErrorScheme(
    val title: String,
    val description: String,
    val MANUAL_URL: String? = null
) {
    BUILD(
        "Ошибка сборки",
        "Вы забыли какой-то из элементов!",
        "здесь ссылка на справку"
    ),
    LOW_BATTERY(
        "Не хватает энергии",
        "Мощности аккумулятора нехватает для питания излучателя",
        "здесь ссылка на справку"
    ),
}