var i = {
    firstName: "John",
    lastName: "Doe",
    id: 5566,
    fullName: function() {
      return this.firstName + " " + this.lastName;
    }
  };
  //toUpperCase
 console.log( i.lastName.toUpperCase());
//  adding new peoperties
i.nationality="english";
console.log(i)
// deleting properties
delete i.nationality;
console.log(i)