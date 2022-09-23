//
// Created by Dmytro Klishch on 9/22/22.
//

#ifndef KNOWYOURKNOWLEDGEMYFORK_FILE_H
#define KNOWYOURKNOWLEDGEMYFORK_FILE_H


#include <string>

class File {
public:
    File(const std::string &filepath, const std::string &filename, const std::string &extension);

    std::string filename() const;

    std::string extension() const;

    std::string filepath() const;

    bool exists() const;

    bool is_text_file() const;

private:
    std::string _filename;
    std::string _extension;
    std::string _filepath;
};


#endif //KNOWYOURKNOWLEDGEMYFORK_FILE_H