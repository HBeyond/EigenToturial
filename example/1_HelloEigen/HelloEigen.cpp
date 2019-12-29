#include <cmath>
#include <iostream>
#include <vector>
#include "Eigen/Core"
#include "Eigen/Dense"
#include "Eigen/Geometry"

using namespace Eigen;
using namespace std;

int main(int argc, char* argv[]) {
    //    MatrixXd m(2, 2);
    //    m(0, 0) = 3;
    //    m(1, 0) = 2.5;
    //    m(0, 1) = -1;
    //    m(1, 1) = m(0, 1) + m(1, 0);
    //    cout << m << endl;

    //    MatrixXd pos = MatrixXd::Random(4, 2);
    //    pos << 1, 2, 3, 4, 5, 6, 7, 8;
    //    cout << pos.topRows(1) << endl;
    //    for (int i = 0; i < pos.rows(); ++i) {
    //        for (int j = 0; j < pos.cols(); ++j) {
    //            cout << pos(i, j) << endl;
    //        }
    //    }

    //    cout << pos.topRows(1).norm() << endl;
    //    cout << sqrt(1 + 4) << endl;

    //    MatrixXd posErr(2, 2);
    //    posErr << pos(0, 0) - pos(1, 0), pos(0, 1) - pos(1, 1), pos(2, 0) - pos(3, 0), pos(2, 1) - pos(3, 1);
    //    for (int i = 0; i < posErr.rows(); ++i) {
    //        for (int j = 0; j < posErr.cols(); ++j) {
    //            cout << posErr(i, j) << endl;
    //        }
    //    }
    //    Vector2d osmVec(posErr(0, 0), posErr(0, 1));
    //    Vector2d optVec(posErr(1, 0), posErr(1, 1));
    //    double osmOptDot = osmVec.dot(optVec);
    //    cout << "osmOptDot = " << osmOptDot << endl;

    //    Vector2d innerDis(2);
    //    innerDis << posErr.topRows(1).norm(), posErr.bottomRows(1).norm();
    //    cout << innerDis(0) << ", " << innerDis(1) << endl;

    //    cout << acos(0) << endl;

    //    double a = 0.39;
    //    double b = 0.522;
    //    double c = 5.84;
    //    double d = -3.25;
    //    int f = (d >= 0) ? 1 : -1;
    //    cout << "f = " << f << endl;
    //    double r = a * c + b * f;
    //    cout << "r = " << r << endl;

    //    // VectorXd aVec(9);
    //    double aVec[9] = {0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0};
    //    Map<Matrix<double, 3, 3, Eigen::RowMajor>> bMap(aVec);
    //    for (int i = 0; i < 3; ++i) {
    //        for (int j = 0; j < 3; ++j) {
    //            cout << bMap(i, j) << endl;
    //        }
    //    }

    //    // Map
    //    int mapVec[8];
    //    for (int i = 0; i < 8; ++i) {
    //        mapVec[i] = i;
    //    }
    //    cout << "to matrix: " << Map<Matrix<int, 2, 4, RowMajor>>(mapVec) << endl;
    //    MatrixXi mapVec2Mat = Map<Matrix<int, 2, 4, RowMajor>>(mapVec);
    //    for (int i = 0; i < mapVec2Mat.rows(); ++i) {
    //        for (int j = 0; j < mapVec2Mat.cols(); ++j) {
    //            cout << "mapVec2Mat[" << i << "][" << j << "] = " << mapVec2Mat(i, j) << endl;
    //        }
    //    }

    //    int mapVec2[2][3];
    //    int val = 0;
    //    for (int i = 0; i < 2; ++i) {
    //        for (int j = 0; j < 3; ++j) {
    //            mapVec2[i][j] = val;
    //            val++;
    //        }
    //    }
    //    for (int i = 0; i < 2; ++i) {
    //        for (int j = 0; j < 3; ++j) {
    //            cout << mapVec2[i][j] << endl;
    //        }
    //    }
    //    cout << "to vector: \n" << Map<Vector3i>(mapVec) << endl;

    //    Map<Vector3i>(mapVec + 1);
    // cout << "to vector new: \n" << mapVec2(0) << endl;

    //    Vector3d sigmaP(2, 3, 4);
    //    Vector3d result(sigmaP.array().square());
    //    cout << result << endl;

    //    MatrixX2d p = MatrixX2d::Random(3, 2);
    //    p(0, 0) = 0.0;

    MatrixXd k(3, 3);
    k.setZero();
    cout << k << endl;

    Matrix<double, 3, 3> kk = Matrix<double, 3, 3>::Zero();
    cout << "kk = " << endl << kk << endl;

    Matrix3d kkk = Matrix3d::Zero();
    cout << "kkk = " << endl << kkk << endl;
    return 0;
}
