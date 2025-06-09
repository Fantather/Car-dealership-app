#pragma once
#include <string>

struct Car {
	std::string model;
	std::string engine_volume;
	int year = 0;
	int price = 0;

	Car() = default;
	Car(std::string model, std::string engine_volume, int year, int price) : model(model), engine_volume(engine_volume), year(year), price(price) {}
};

// Функтор для сортировки по году
struct SortByYear {
    bool operator()(const Car& a, const Car& b) const {
        return a.year < b.year;
    }
};

// Функтор для сортировки по цене
struct SortByPrice {
    bool operator()(const Car& a, const Car& b) const {
        return a.price < b.price;
    }
};

// Функтор для сортировки по модели
struct SortByModel {
    bool operator()(const Car& a, const Car& b) const {
        return a.model < b.model;
    }
};

// Функтор для сортировки по объему двигателя
struct SortByEngineVolume {
    bool operator()(const Car& a, const Car& b) const {
        return a.engine_volume < b.engine_volume;
    }
};