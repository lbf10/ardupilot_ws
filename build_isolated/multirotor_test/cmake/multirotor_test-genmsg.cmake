# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(WARNING "Invoking generate_messages() without having added any message or service file before.
You should either add add_message_files() and/or add_service_files() calls or remove the invocation of generate_messages().")
message(STATUS "multirotor_test: 0 messages, 0 services")

set(MSG_I_FLAGS "-Istd_msgs:/opt/ros/melodic/share/std_msgs/cmake/../msg;-Igeometry_msgs:/opt/ros/melodic/share/geometry_msgs/cmake/../msg;-Inav_msgs:/opt/ros/melodic/share/nav_msgs/cmake/../msg;-Imavros_msgs:/home/lbf10/ardupilot_ws/src/mavros/mavros_msgs/msg;-Iactionlib_msgs:/opt/ros/melodic/share/actionlib_msgs/cmake/../msg;-Igeographic_msgs:/opt/ros/melodic/share/geographic_msgs/cmake/../msg;-Isensor_msgs:/opt/ros/melodic/share/sensor_msgs/cmake/../msg;-Iuuid_msgs:/opt/ros/melodic/share/uuid_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(multirotor_test_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages

### Generating Services

### Generating Module File
_generate_module_cpp(multirotor_test
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/multirotor_test
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(multirotor_test_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(multirotor_test_generate_messages multirotor_test_generate_messages_cpp)

# add dependencies to all check dependencies targets

# target for backward compatibility
add_custom_target(multirotor_test_gencpp)
add_dependencies(multirotor_test_gencpp multirotor_test_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS multirotor_test_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages

### Generating Services

### Generating Module File
_generate_module_eus(multirotor_test
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/multirotor_test
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(multirotor_test_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(multirotor_test_generate_messages multirotor_test_generate_messages_eus)

# add dependencies to all check dependencies targets

# target for backward compatibility
add_custom_target(multirotor_test_geneus)
add_dependencies(multirotor_test_geneus multirotor_test_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS multirotor_test_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages

### Generating Services

### Generating Module File
_generate_module_lisp(multirotor_test
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/multirotor_test
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(multirotor_test_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(multirotor_test_generate_messages multirotor_test_generate_messages_lisp)

# add dependencies to all check dependencies targets

# target for backward compatibility
add_custom_target(multirotor_test_genlisp)
add_dependencies(multirotor_test_genlisp multirotor_test_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS multirotor_test_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages

### Generating Services

### Generating Module File
_generate_module_nodejs(multirotor_test
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/multirotor_test
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(multirotor_test_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(multirotor_test_generate_messages multirotor_test_generate_messages_nodejs)

# add dependencies to all check dependencies targets

# target for backward compatibility
add_custom_target(multirotor_test_gennodejs)
add_dependencies(multirotor_test_gennodejs multirotor_test_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS multirotor_test_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages

### Generating Services

### Generating Module File
_generate_module_py(multirotor_test
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/multirotor_test
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(multirotor_test_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(multirotor_test_generate_messages multirotor_test_generate_messages_py)

# add dependencies to all check dependencies targets

# target for backward compatibility
add_custom_target(multirotor_test_genpy)
add_dependencies(multirotor_test_genpy multirotor_test_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS multirotor_test_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/multirotor_test)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/multirotor_test
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(multirotor_test_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()
if(TARGET geometry_msgs_generate_messages_cpp)
  add_dependencies(multirotor_test_generate_messages_cpp geometry_msgs_generate_messages_cpp)
endif()
if(TARGET nav_msgs_generate_messages_cpp)
  add_dependencies(multirotor_test_generate_messages_cpp nav_msgs_generate_messages_cpp)
endif()
if(TARGET mavros_msgs_generate_messages_cpp)
  add_dependencies(multirotor_test_generate_messages_cpp mavros_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/multirotor_test)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/multirotor_test
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(multirotor_test_generate_messages_eus std_msgs_generate_messages_eus)
endif()
if(TARGET geometry_msgs_generate_messages_eus)
  add_dependencies(multirotor_test_generate_messages_eus geometry_msgs_generate_messages_eus)
endif()
if(TARGET nav_msgs_generate_messages_eus)
  add_dependencies(multirotor_test_generate_messages_eus nav_msgs_generate_messages_eus)
endif()
if(TARGET mavros_msgs_generate_messages_eus)
  add_dependencies(multirotor_test_generate_messages_eus mavros_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/multirotor_test)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/multirotor_test
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(multirotor_test_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()
if(TARGET geometry_msgs_generate_messages_lisp)
  add_dependencies(multirotor_test_generate_messages_lisp geometry_msgs_generate_messages_lisp)
endif()
if(TARGET nav_msgs_generate_messages_lisp)
  add_dependencies(multirotor_test_generate_messages_lisp nav_msgs_generate_messages_lisp)
endif()
if(TARGET mavros_msgs_generate_messages_lisp)
  add_dependencies(multirotor_test_generate_messages_lisp mavros_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/multirotor_test)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/multirotor_test
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(multirotor_test_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()
if(TARGET geometry_msgs_generate_messages_nodejs)
  add_dependencies(multirotor_test_generate_messages_nodejs geometry_msgs_generate_messages_nodejs)
endif()
if(TARGET nav_msgs_generate_messages_nodejs)
  add_dependencies(multirotor_test_generate_messages_nodejs nav_msgs_generate_messages_nodejs)
endif()
if(TARGET mavros_msgs_generate_messages_nodejs)
  add_dependencies(multirotor_test_generate_messages_nodejs mavros_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/multirotor_test)
  install(CODE "execute_process(COMMAND \"/usr/bin/python2\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/multirotor_test\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/multirotor_test
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(multirotor_test_generate_messages_py std_msgs_generate_messages_py)
endif()
if(TARGET geometry_msgs_generate_messages_py)
  add_dependencies(multirotor_test_generate_messages_py geometry_msgs_generate_messages_py)
endif()
if(TARGET nav_msgs_generate_messages_py)
  add_dependencies(multirotor_test_generate_messages_py nav_msgs_generate_messages_py)
endif()
if(TARGET mavros_msgs_generate_messages_py)
  add_dependencies(multirotor_test_generate_messages_py mavros_msgs_generate_messages_py)
endif()
