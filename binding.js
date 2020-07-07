let module;

if (process.env.DEBUG) {
  module = require("./build/Debug/gc-states.node");
} else {
  module = require("./build/Release/gc-states.node");
}

module.exports = module;
