#ifndef ORGANIZADOR_H
#define ORGANIZADOR_H

#include <vector>
#include <string>

class Organizador {
private:
    std::vector<std::string> tareas; 

    bool Tarea(const std::string& tarea)const;

public:

    Organizador();

    void add(const std::string& tarea);
    void eliminar(const std::string& tarea);
    void lista() const;
    std::vector<std::string> getTareas() const;
    void setTareas(const std::vector<std::string>& newassigment);
};

#endif