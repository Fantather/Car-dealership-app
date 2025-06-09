#include "CarArr.h"
#include <stdexcept>
#include <iostream>

void CarArr::push_back(Car obj) {
    arr_.push_back(obj);
}

void CarArr::insert(size_t index, Car obj) {
    if (index > arr_.size())
        throw std::out_of_range("Index out of range");
    arr_.insert(arr_.begin() + index, obj);
}

void CarArr::delete_back() {
    if (arr_.empty())
        throw std::out_of_range("Array is empty");
    arr_.pop_back();
}

void CarArr::delete_index(size_t index) {
    if (index >= arr_.size())
        throw std::out_of_range("Index out of range");
    arr_.erase(arr_.begin() + index);
}

void CarArr::print() const {
    if (arr_.empty()) {
        std::cout << "No cars available.\n";
        return;
    }

    for (size_t i = 0; i < arr_.size(); ++i) {
        const Car& car = arr_[i];
        std::cout << "[" << i + 1 << "] "
            << car.model << " | "
            << car.year << " | "
            << car.engine_volume << " | $"
            << car.price << "\n";
    }
}