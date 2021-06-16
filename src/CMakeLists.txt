cmake_minimum_required(VERSION 3.1.0)
project(mindmapParser)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
add_definitions(-W -Wall -std=c++17)
set(CMAKE_AUTOMOC ON)
find_package(Qt5Widgets CONFIG REQUIRED)
set(sources 
	main.cpp
	MainWindow.cpp
	AboutDialog.cpp
	CentralWidget.cpp
	Previewer.cpp
	MindmapEditor.cpp
	MindmapNode.cpp
	MindmapLine.cpp
	MindmapParser.cpp
	FileOperator.cpp
	GlobalSettings.cpp
	Model.cpp
	Viewer.cpp
	Render.cpp
	)
add_executable(${PROJECT_NAME} ${sources})
target_link_libraries(${PROJECT_NAME} Qt5::Widgets)
