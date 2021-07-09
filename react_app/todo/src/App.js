import React, {Component} from 'react'
import Todos from './todos'
import AddTodos from './addTodos'

class App extends Component {
  state = {
    todos: [
      {id: 1, content: 'learn react'},
      {id: 2, content: 'find a stage'}
    ]
  }
  deleteTodo = (id) => {
    const todos =  this.state.todos.filter(todos => {
      return todos.id !== id
    });
    this.setState({
      todos
    })
  }
  addTodo = (todo) => {
    todo.id = Math.random()
    let todos = [...this.state.todos, todo]
    this.setState({
      todos
    })
  }
  render() {
    return (
      <div className="App">
        <h1>Todo list</h1>
        <Todos todos={this.state.todos} deleteTodo={this.deleteTodo} addTodo={this.addTodo}/>
        <AddTodos addTodo={this.addTodo}/>
      </div>
    );
  }
}

export default App;