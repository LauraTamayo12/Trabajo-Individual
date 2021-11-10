//
// Created by Niña popetas on 05/11/2021.
//

#ifndef EXAMPLE_5_11_MOVIE_H
#define EXAMPLE_5_11_MOVIE_H

#include <string>
#include <ostream>

class Movie {

public:
    Movie();

    Movie(const std::string &id, const std::string &title, const std::string &typeMovie,
          const std::string &classification, short year, const std::string &director);

    const std::string &getId() const;

    void setID(const std::string ID);

    const std::string &getTitle() const;

    void setTitle(const std::string ID);

    const std::string &getTypeMovie() const;

    void setTypeMovie(const std::string ID);

    const std::string &getClassification() const;

    void setClassification(const std::string ID);

    short getYear() const;

    void setYear(short year);

    const std::string &getDirector() const;

    void setDirector(const std::string ID);

    friend std::ostream &operator<<(std::ostream &os, const Movie &movie);

    virtual ~Movie();

private:
    const std::string ID;
    const std::string title;
    const std::string typeMovie;
    const std::string classification;
    short year;
    const std::string director;

};

#endif //EXAMPLE_5_11_MOVIE_H
