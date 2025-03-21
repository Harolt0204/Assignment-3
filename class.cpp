#include "class.h"
#include <iostream>
#include <algorithm>

Organizador::Organizador(){}


void Organizador::add(const std::string& tarea) {
    tareas.push_back(tarea);
    std::cout << "New assigment" << tarea << std::endl;
}


void Organizador::eliminar  (const std::string& tarea) {
    auto it = std::find(tareas.begin(), tareas.end(), tarea);
    if (it != tareas.end()) {
        tareas.erase(it);
        std::cout << "Tarea eliminada: " << tarea << std::endl;
    } else {
        std::cout << "La tarea no existe: " << tarea << std::endl;
    }
}


void Organizador::lista() const {
    if (tareas.empty()) {
        std::cout << "There is not assigment" << std::endl;
    } else {
        std::cout << "Assigment" << std::endl;
        for (const auto& tarea : tareas) {
            std::cout << "- " << tarea << std::endl;
        }
    }
}
