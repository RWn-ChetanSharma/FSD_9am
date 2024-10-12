let array = [];

let text = document.getElementById("input");
let add = document.getElementById("add-button");

add.addEventListener("click", () => {
  if (input.value == "") {
    alert("first enter your task");
    return;
  }
  array.push(input.value);
  console.log(array);
  ShowData();
  text.value = "";
});

function ShowData() {
  let container = document.getElementById("todo-cont");
  container.innerHTML = "";

  array.forEach((item, index) => {
    let para = document.createElement("p");
    let edit = document.createElement("button");
    let del = document.createElement("button");

    del.innerText = "delete";
    edit.innerText = "edit";
    del.addEventListener("click", () => {
       let deletData = array.filter((item,i)=>{
        return i != index
        })

        array = deletData

        ShowData()

    })

    edit.addEventListener("click", () => {
      let textValue = prompt();
      array.forEach((item, i) => {
        if (index == i) {
            array[i]= textValue
        }
      });
      ShowData()

    });


    para.textContent = `${item}`;
    container.append(para, edit,del);
  });
}

ShowData();



