#pragma once
#include <iostream>

struct instruments {
	double x = 0;
	double y = 0;
};

instruments scalpelStart;
instruments scalpelEnd;
instruments hem;
instruments tweez;
instruments sutureStart;
instruments sutureEnd;

double x;
double y;

void scalpel() {
	std::cout << "Enter start point: ";
	std::cin >> x;
	std::cin >> y;
	scalpelStart.x = x;
	scalpelStart.y = y;
	std::cout << "Enter end point: ";
	std::cin >> x;
	std::cin >> y;
	scalpelEnd.x = x;
	scalpelEnd.y = y;
	std::cout << "Cut from point (" << scalpelStart.x << "." << scalpelStart.y << ") to point (" << scalpelEnd.x << "." << scalpelEnd.y << ")" << std::endl;
}

void hemostat() {
	std::cout << "Enter clamp point: ";
	std::cin >> x;
	std::cin >> y;
	hem.x = x;
	hem.y = y;
	std::cout << "Clamp set to point (" << hem.x << "." << hem.y << ")" << std::endl;
}

void tweezers() {
	std::cout << "Specify a point for tweezers: ";
	std::cin >> x;
	std::cin >> y;
	tweez.x = x;
	tweez.y = y;
	std::cout << "Tweezers applied at point (" << tweez.x << "." << tweez.y << ")" << std::endl;
}

void suture() {
	std::cout << "Enter start point: ";
	std::cin >> x;
	std::cin >> y;
	sutureStart.x = x;
	sutureStart.y = y;
	std::cout << "Enter end point: ";
	std::cin >> x;
	std::cin >> y;
	sutureEnd.x = x;
	sutureEnd.y = y;
	std::cout << "The seam is imposed from point (" << sutureStart.x << "." << sutureStart.y << ") to point (" << sutureEnd.x << "." << sutureEnd.y << ")" << std::endl;
}

bool compare() {
	if (scalpelStart.x == sutureStart.x && scalpelStart.y == sutureStart.y && scalpelEnd.x == sutureEnd.x && scalpelEnd.y == sutureEnd.y) return true;
	else return false;
}