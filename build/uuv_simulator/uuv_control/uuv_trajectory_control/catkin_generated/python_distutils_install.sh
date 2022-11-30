#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/nitin/Desktop/Robotics-Lab1/src/uuv_simulator/uuv_control/uuv_trajectory_control"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/nitin/Desktop/Robotics-Lab1/install/lib/python3/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/nitin/Desktop/Robotics-Lab1/install/lib/python3/dist-packages:/home/nitin/Desktop/Robotics-Lab1/build/lib/python3/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/nitin/Desktop/Robotics-Lab1/build" \
    "/usr/bin/python3" \
    "/home/nitin/Desktop/Robotics-Lab1/src/uuv_simulator/uuv_control/uuv_trajectory_control/setup.py" \
     \
    build --build-base "/home/nitin/Desktop/Robotics-Lab1/build/uuv_simulator/uuv_control/uuv_trajectory_control" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/nitin/Desktop/Robotics-Lab1/install" --install-scripts="/home/nitin/Desktop/Robotics-Lab1/install/bin"
