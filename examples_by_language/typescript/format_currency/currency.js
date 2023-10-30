"use strict";
exports.__esModule = true;
exports.toGBP = void 0;
var toGBP = function (numberString) {
    var number = parseFloat(numberString);
    var formatted = new Intl.NumberFormat('en-GB', {
        style: 'currency',
        currency: 'GBP',
        minimumFractionDigits: 2
    }).format(number);
    return formatted;
};
exports.toGBP = toGBP;
