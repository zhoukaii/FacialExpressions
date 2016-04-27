#pragma once
#include "BaseClassifier.h"
#include "../FeatureExtractor.h"
#include "../Loader.h"

#ifndef LINEARSVM_H_
#define LINEARSVM_H_

using namespace std;
using namespace dlib;
using namespace cv;
using namespace cv::ml;

class LinearSVM:public BaseClassifier
{
public:
	LinearSVM();
	~LinearSVM();

	std::vector<Ptr<ml::SVM>> svm;

	void train(std::vector<std::vector<float>> trainingData, std::vector<float> trainingLabels, float C = 83.9666, float gamma = 3.375e-06);
	void predict(std::vector<std::vector<float>> testData, std::vector<float> testLabels, std::vector<std::vector<float>> &result);
	std::vector<float> predict(Mat testData);
};

#endif