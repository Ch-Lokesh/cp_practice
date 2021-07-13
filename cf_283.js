var a;
var b;
var d;
var e;
var f = [1, 2];
var Color;
(function (Color) {
    Color[Color["Red"] = 0] = "Red";
    Color[Color["Green"] = 1] = "Green";
    Color[Color["Blue"] = 2] = "Blue";
})(Color || (Color = {}));
;
var backgroundColor = Color.Red;
var backgroundColor2 = Color.Green;
console.log(backgroundColor);
console.log(backgroundColor2);
