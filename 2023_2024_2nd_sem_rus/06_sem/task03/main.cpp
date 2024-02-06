#include <iostream>

int main() {
}

/*

В C++, класс std::string из стандартной библиотеки предоставляет широкий спектр методов для работы со строками. Вот список наиболее часто используемых методов std::string:

empty() - Проверяет, пуста ли строка.
size() или length() - Возвращает количество символов в строке.
capacity() - Возвращает количество символов, которое может хранить строка без перевыделения памяти.
reserve(size_t n) - Зарезервировать место для хранения минимум n символов.
clear() - Очищает строку (делает её пустой).
append(const string& str) - Добавляет строку str в конец текущей строки.
insert(size_t pos, const string& str) - Вставляет строку str начиная с позиции pos.
erase(size_t pos = 0, size_t len = npos) - Удаляет часть строки, начиная с pos длиной len.
replace(size_t pos, size_t len, const string& str) - Заменяет часть строки, начиная с pos длиной len, на строку str.
substr(size_t pos = 0, size_t len = npos) - Возвращает подстроку, начиная с pos длиной len.
compare(const string& str) const - Сравнивает текущую строку со строкой str.
find(const string& str, size_t pos = 0) const - Находит первое вхождение подстроки str в строку, начиная с позиции pos.
rfind(const string& str, size_t pos = npos) const - Находит последнее вхождение подстроки str в строку, начиная с позиции pos.
find_first_of(const string& str, size_t pos = 0) const - Находит первое вхождение любого из символов строки str в текущей строке, начиная с позиции pos.
find_last_of(const string& str, size_t pos = npos) const - Находит последнее вхождение любого из символов строки str в текущей строке, начиная с позиции pos.
*/