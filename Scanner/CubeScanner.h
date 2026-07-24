//
// Created by Pranav on 25-07-2025.
//

#ifndef CUBESCANNER_H
#define CUBESCANNER_H

#include <opencv2/opencv.hpp>
#include "Model/RubiksCube.h"
#include <cassert>
#include <cstddef>
#include <cstdint>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <array>
#include <queue>
#include <stack>
#include <deque>
#include <list>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <functional>
#include <memory>
#include <random>
#include <chrono>
#include <stdexcept>
#include <cmath>
#include <bitset>


using namespace std;
using namespace cv;

class CubeScanner {
public:
    CubeScanner(int camIndex = 0, int boxSize = 60);
    ~CubeScanner();

    void scan(RubiksCube& cube);

private:
    VideoCapture cap;
    int boxSize;

    static const map<RubiksCube::COLOR, Scalar> colorMap;

    RubiksCube::COLOR classifyColor(const Vec3b& bgr);
    Vec3b medianColor(const Mat& frame, int centerX, int centerY, int region = 5);

    vector<vector<RubiksCube::COLOR>> captureFace();
    Mat drawColorFace(const vector<vector<RubiksCube::COLOR>>& faceGrid);
    Mat drawFullCube(const vector<vector<vector<RubiksCube::COLOR>>>& cubeGrid);
};

#endif //CUBESCANNER_H
