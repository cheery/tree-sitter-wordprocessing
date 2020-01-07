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
    source_file: $ => repeat($.element),
    element: $ => choice(
        TEXT,
        seq(LB, repeat($.element), RB),
        seq(LP, $.attributes)),
    attributes: $ => choice(
        seq(optional(TEXT), RP),
        seq(optional(TEXT), SEP, $.attributes))
  }
});
