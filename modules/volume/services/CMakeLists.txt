add_library(volume_services STATIC
    Volume.cpp
)

target_link_libraries(volume_services
    Qt6::Core
)