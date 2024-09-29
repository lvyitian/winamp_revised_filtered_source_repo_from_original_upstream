project "zlib-lib"
	language    "C"
	kind        "StaticLib"
	defines     { "N_FSEEKO" }
	warnings    "off"

	files
	{
		"**.h",
		"**.c"
	}

	filter "system:arch"
		defines { "_WINDOWS" }

	filter "system:not arch"
		defines { 'HAVE_UNISTD_H' }
