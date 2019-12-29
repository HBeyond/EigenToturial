#include <fstream>
#include <iomanip>
#include <iostream>
#include <vector>
#include "Eigen/Core"
#include "Eigen/Dense"
#include "boost/algorithm/string.hpp"
#include "boost/lexical_cast.hpp"
#include "boost/tokenizer.hpp"
#include "eigen3/Eigen/Dense"
#include "gflags/gflags.h"
#include "glog/logging.h"

using namespace std;
using namespace boost;
using namespace boost::algorithm;
using namespace Eigen;

DEFINE_string(saveFolder, "/home/beyoung/work/1_project/2_Mine/2_Eigen/Eigen_Toturial/data/", "save data folder");

// Tokenize string with specified separator
std::vector<string> tokenize(const std::string& line, const std::string& separator = ",") {
    using Tokenizer = tokenizer<char_separator<char>>;
    char_separator<char> sep{separator.c_str()};
    Tokenizer tok(line, sep);
    vector<string> tokens;
    tokens.assign(tok.begin(), tok.end());
    return tokens;
}

int main(int argc, char** argv) {
    // Eigen::Matrix<double, 20, 8> tempCorrect;
    // Eigen::MatrixXd tempCorrect;

    Eigen::Matrix<double, 20, 8> tempCorrect;

    string file = FLAGS_saveFolder + "correctNoTimeCheck.txt";
    fstream fs(file, ios::in);
    if (!fs.is_open()) {
        LOG(FATAL) << "cannot open file \"" << file << "\"";
    }

    fstream correctTimeCheckFile(FLAGS_saveFolder + "correct.txt", ios::out);
    if (!correctTimeCheckFile.is_open()) {
        cout << "cannot open or create file" << endl;
    }

    // tempCorrect(0, 0) = 898.00976;

    string line;
    // getline(fs, line);

    for (int i = 0; i < 20; ++i) {
        getline(fs, line);
        vector<string> tokens = tokenize(line, ",");
        // vector<double> temp;
        //        for (int j = 0; j < 8; ++j) {
        //            temp.emplace_back(lexical_cast<double>(trim_copy(tokens[j])));
        //            //            correctTimeCheckFile << setprecision(15) << temp[0] << ", " << temp[1] << ", " <<
        //            temp[3] <<
        //            //            ", " << temp[3]
        //            //                                 << ", " << temp[4] << ", " << temp[5] << ", " << temp[6] << ",
        //            " <<
        //            //                                 temp[7] << endl;
        //        }
        //        = lexical_cast<double>(trim_copy(tokens[0])), lexical_cast<double>(trim_copy(tokens[1])),
        //            lexical_cast<double>(trim_copy(tokens[2])), lexical_cast<double>(trim_copy(tokens[3])),
        //            lexical_cast<double>(trim_copy(tokens[4])), lexical_cast<double>(trim_copy(tokens[5])),
        //            lexical_cast<double>(trim_copy(tokens[6])), lexical_cast<double>(trim_copy(tokens[7]));
        //        double t = lexical_cast<double>(trim_copy(tokens[0]));
        //        cout << "t = " << t << endl;
        tempCorrect(i, 0) = lexical_cast<double>(trim_copy(tokens[0]));
        tempCorrect(i, 1) = lexical_cast<double>(trim_copy(tokens[1]));
        tempCorrect(i, 2) = lexical_cast<double>(trim_copy(tokens[2]));
        tempCorrect(i, 3) = lexical_cast<double>(trim_copy(tokens[3]));
        tempCorrect(i, 4) = lexical_cast<double>(trim_copy(tokens[4]));
        tempCorrect(i, 5) = lexical_cast<double>(trim_copy(tokens[5]));
        tempCorrect(i, 6) = lexical_cast<double>(trim_copy(tokens[6]));
        tempCorrect(i, 7) = lexical_cast<double>(trim_copy(tokens[7]));

        // not right tempCorrect.row(i) << temp;
    }

    //    Eigen::Matrix<double, 20, 8> correct;
    //    int newRowNum = 0;
    //    for (int i = 0; i < 20; ++i) {
    //        if ((i == 0) && (tempCorrect(i, 0) < tempCorrect(i + 1, 0))) {
    //            correct(i, 0) = tempCorrect(i, 0);
    //            correct(i, 1) = tempCorrect(i, 1);
    //            correct(i, 2) = tempCorrect(i, 2);
    //            correct(i, 3) = tempCorrect(i, 3);
    //            correct(i, 4) = tempCorrect(i, 4);
    //            correct(i, 5) = tempCorrect(i, 5);
    //            correct(i, 6) = tempCorrect(i, 6);
    //            correct(i, 7) = tempCorrect(i, 7);
    //            ++newRowNum;
    //        } else if ((i == 19) && (tempCorrect(i, 0) > tempCorrect(i - 1, 0))) {
    //            correct(i, 0) = tempCorrect(i, 0);
    //            correct(i, 1) = tempCorrect(i, 1);
    //            correct(i, 2) = tempCorrect(i, 2);
    //            correct(i, 3) = tempCorrect(i, 3);
    //            correct(i, 4) = tempCorrect(i, 4);
    //            correct(i, 5) = tempCorrect(i, 5);
    //            correct(i, 6) = tempCorrect(i, 6);
    //            correct(i, 7) = tempCorrect(i, 7);
    //            ++newRowNum;
    //        } else if ((0 < i < 19) &&
    //                   ((tempCorrect(i, 0) < tempCorrect(i - 1, 0)) || (tempCorrect(i, 0) > tempCorrect(i + 1, 0)))) {
    //            correct(i, 0) = tempCorrect(i, 0);
    //            correct(i, 1) = tempCorrect(i, 1);
    //            correct(i, 2) = tempCorrect(i, 2);
    //            correct(i, 3) = tempCorrect(i, 3);
    //            correct(i, 4) = tempCorrect(i, 4);
    //            correct(i, 5) = tempCorrect(i, 5);
    //            correct(i, 6) = tempCorrect(i, 6);
    //            correct(i, 7) = tempCorrect(i, 7);
    //            ++newRowNum;
    //        } else {
    //            continue;
    //        }
    //    }

    // tempCorrect.resize(10, 8);

    // correct.resize(newRowNum, 8);
    //    for (int i = 0; i < newRowNum; ++i) {
    //        correctTimeCheckFile << setprecision(15) << correct(i, 0) << ", " << correct(i, 1) << ", " << correct(i,
    //        2)
    //                             << ", " << correct(i, 3) << ", " << correct(i, 4) << ", " << correct(i, 5) << ", "
    //                             << correct(i, 6) << ", " << correct(i, 7) << endl;
    //    }

    cout << "the correct.txt is " << endl << tempCorrect << endl;
    tempCorrect.resize(8, 20);  // only Dynamic matrix can use this
    cout << "the correct resized is " << endl << tempCorrect << endl;
}
