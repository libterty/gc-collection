{
	"targets": [
    {
      "target_name": "gc-states",
      "include_dirs" : [
        "src",
        "<!(node -e \"require('nan')\")"
      ],
      "sources": [ "src/gc.cc" ]
    }
  ]
}
