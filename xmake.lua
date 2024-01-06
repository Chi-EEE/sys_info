target("sys_info")
    set_kind("$(kind)")
    set_languages("cxx11")
    add_files("core/src/*.cpp")
    add_includedirs("core/include", {public = true})
    add_headerfiles("core/include/(sys_info/*.h)")
    if is_plat("windows") then
        add_defines("WIN32")
    elseif is_plat("linux") then
        add_defines("__linux__")
    end