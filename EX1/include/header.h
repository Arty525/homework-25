#pragma once
#include <iostream>

struct instruments {
	double x;
	double y;
};

void scalpel(double x, double y) {
	instruments scalpelStart;
	std::cout << "Enter start point: ";
	std::cin >> x;
	std::cin >> y;
	scalpelStart.x = x;
	scalpelStart.y = y;
	std::cout << "Enter end point: ";
	std::cin >> x;
	std::cin >> y;
	instruments scalpelEnd;
	scalpelEnd.x = x;
	scalpelEnd.y = y;
	std::cout << "Cut from point (" << scalpelStart.x << "." << scalpelStart.y << ") to point (" << scalpelEnd.x << "." << scalpelEnd.y << ")" << std::endl;
}

void hemostat(double x, double y) {
	instruments hemostat;
	std::cout << "Enter clamp point: ";
	std::cin >> x;
	std::cin >> y;
	hemostat.x = x;
	hemostat.y = y;
	std::cout << "Clamp set to point (" << hemostat.x << "." << hemostat.y << ")" << std::endl;
}

void tweezers(double x, double y) {
	instruments tweezers;
	std::cout << "Specify a point for tweezers: ";
	std::cin >> x;
	std::cin >> y;
	tweezers.x = x;
	tweezers.y = y;
	std::cout << "Tweezers applied at point (" << tweezers.x << "." << tweezers.y << ")" << std::endl;
}

void suture(double x, double y) {
	instruments sutureStart;
	std::cout << "Enter start point: ";
	std::cin >> x;
	std::cin >> y;
	sutureStart.x = x;
	sutureStart.y = y;
	std::cout << "Enter end point: ";
	std::cin >> x;
	std::cin >> y;
	instruments sutureEnd;
	sutureEnd.x = x;
	sutureEnd.y = y;
	std::cout << "The seam is imposed from point (" << sutureStart.x << "." << sutureStart.y << ") to point (" << sutureEnd.x << "." << sutureEnd.y << ")" << std::endl;
}