var TEXT = /[^\x10\x11\x12\x13\x16]+/;
var LP = "\x10";
var RP = "\x11";
var LB = "\x12";
var RB = "\x13";
var SEP = "\x16";

module.exports = grammar({
  name: 'wordprocessing',

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => repeat(choice($.text, $.element, $.attr)),
    text:    $ => TEXT,
    element: $ => seq(LB, repeat(choice($.text,$.element,$.attr)), RB),
    attr:    $ => seq(LP, $._attr_tail),
    _attr_tail: $ => choice(
        seq(optional($.text), RP),
        seq(optional($.text), SEP, $._attr_tail))
  }
});
