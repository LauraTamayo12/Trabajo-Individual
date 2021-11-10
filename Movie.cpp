//
// Created by Niña popetas on 05/11/2021.
//

#include "Movie.h"
#include <iostream>

Movie::Movie() {}

Movie::Movie(const std::string &ID, const std::string &title, const std::string &typeMovie, const std::string &classification, short year, const std::string &director) : ID(ID),
            title(title), typeMovie(typeMovie), classification(classification), year(year), director(director) {}

const std::string &Movie::getId() const {
    return ID;
}

void Movie::setID(const std::string ID) {
    Movie::ID = ID;
}

const std::string &Movie::getTitle() const {
    return title;
}

void Movie::setTitle(const std::string ID) {
    Movie::title = title;
}

const std::string &Movie::getTypeMovie() const {
    return typeMovie;
}

void Movie::setClassification(const std::string ID) {
    Movie::classification = classification;
}

short Movie::getYear() const {
    return year;
}

void Movie::setYear(short year) {
    Movie::year = year;
}

const std::string &Movie::getDirector() const {
    return director;
}

void Movie::setDirector(const std::string ID) {
    Movie::director = director;
}


std::ostream &operator<<(std::ostream &os, const Movie &movie) {
    os << "ID: " <<movie.ID << " title: " << movie.title << " typeMovie: " << movie.typeMovie<< " year: "
       << movie.year << " classication: " << movie.classification << "director: " << movie.director;
    return os;
}

Movie::~Movie() {
    std::cout<<"Goob Bye"<<std::endl;
}