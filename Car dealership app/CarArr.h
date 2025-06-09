#pragma once
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include "Car.h"

class CarArr {
private:
    std::vector<Car> arr_;

public:
    // Конструкторы
    CarArr() = default;
    explicit CarArr(size_t reserved_elements) {
        if (reserved_elements > 0) arr_.reserve(reserved_elements);
    }

    // Добавление
    void push_back(Car obj);
    void insert(size_t index, Car obj);

    // Удаление
    void delete_back();
    void delete_index(size_t index);

    // Отображение данных
    void print() const;

    // Сортировка (шаблонный метод)
    template <typename Compare>
    void sort(Compare comp) {
        std::sort(arr_.begin(), arr_.end(), comp);
    }

    // Поиск (шаблонный метод)
    template <typename Predicate>
    std::vector<Car> find(Predicate pred) const {
        std::vector<Car> results;
        for (const auto& car : arr_) {
            if (pred(car)) results.push_back(car);
        }
        return results;
    }
};

//Задание
//Создайте приложение для работы автосалона.
//Необходимо хранить информацию о продаваемых автомобилях(название, год выпуска, объем двигателя, цену).
//Реализуйте интерфейс для добавления данных, удаления данных, отображения данных, сортировке данных по различным параметрам, поиску данных по различным параметрам.
//При реализации используйте контейнеры, функторы и алгоритмы